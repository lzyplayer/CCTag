#ifndef _CCTAG_LMIMAGECENTEROPTIMIZER_HPP_
#define	_CCTAG_LMIMAGECENTEROPTIMIZER_HPP_

#ifdef WITH_CMINPACK

#include <cctag/global.hpp>
#include <cctag/geometry/point.hpp>
#include <cctag/algebra/matrix/Matrix.hpp>

#include <cctag/CCTag.hpp>

namespace cctag {
namespace vision {
namespace marker {

class LMImageCenterOptimizer
{
public:
	typedef std::vector< cctag::Point2dN<double> > VecExtPoints;
public:
	LMImageCenterOptimizer();
	virtual ~LMImageCenterOptimizer();
	/**
	 * @brief Do optimization.
	 *
	 * @param[in] cctagToRefine initial cctag to refine
	 * @return residual error
	 */
	double operator()( CCTag & cctagToRefine );
	static int homology( void* p, int m, int n, const double* x, double* fvec, int iflag );

private:
	cctag::Point2dN<double> _pToRefine;
};

}
}
}

#endif

#endif
