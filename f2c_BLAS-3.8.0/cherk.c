/* cherk.f -- translated by f2c (version 20191129).
   You must link the resulting object file with libf2c:
	on Microsoft Windows system, link with libf2c.lib;
	on Linux or Unix systems, link with .../path/to/libf2c.a -lm
	or, if you install libf2c.a in a standard place, with -lf2c -lm
	-- in that order, at the end of the command line, as in
		cc *.o -lf2c -lm
	Source for libf2c is in /netlib/f2c/libf2c.zip, e.g.,

		http://www.netlib.org/f2c/libf2c.zip
*/

#include "f2c.h"

/* > \brief \b CHERK */

/*  =========== DOCUMENTATION =========== */

/* Online html documentation available at */
/*            http://www.netlib.org/lapack/explore-html/ */

/*  Definition: */
/*  =========== */

/*       SUBROUTINE CHERK(UPLO,TRANS,N,K,ALPHA,A,LDA,BETA,C,LDC) */

/*       .. Scalar Arguments .. */
/*       REAL ALPHA,BETA */
/*       INTEGER K,LDA,LDC,N */
/*       CHARACTER TRANS,UPLO */
/*       .. */
/*       .. Array Arguments .. */
/*       COMPLEX A(LDA,*),C(LDC,*) */
/*       .. */


/* > \par Purpose: */
/*  ============= */
/* > */
/* > \verbatim */
/* > */
/* > CHERK  performs one of the hermitian rank k operations */
/* > */
/* >    C := alpha*A*A**H + beta*C, */
/* > */
/* > or */
/* > */
/* >    C := alpha*A**H*A + beta*C, */
/* > */
/* > where  alpha and beta  are  real scalars,  C is an  n by n  hermitian */
/* > matrix and  A  is an  n by k  matrix in the  first case and a  k by n */
/* > matrix in the second case. */
/* > \endverbatim */

/*  Arguments: */
/*  ========== */

/* > \param[in] UPLO */
/* > \verbatim */
/* >          UPLO is CHARACTER*1 */
/* >           On  entry,   UPLO  specifies  whether  the  upper  or  lower */
/* >           triangular  part  of the  array  C  is to be  referenced  as */
/* >           follows: */
/* > */
/* >              UPLO = 'U' or 'u'   Only the  upper triangular part of  C */
/* >                                  is to be referenced. */
/* > */
/* >              UPLO = 'L' or 'l'   Only the  lower triangular part of  C */
/* >                                  is to be referenced. */
/* > \endverbatim */
/* > */
/* > \param[in] TRANS */
/* > \verbatim */
/* >          TRANS is CHARACTER*1 */
/* >           On entry,  TRANS  specifies the operation to be performed as */
/* >           follows: */
/* > */
/* >              TRANS = 'N' or 'n'   C := alpha*A*A**H + beta*C. */
/* > */
/* >              TRANS = 'C' or 'c'   C := alpha*A**H*A + beta*C. */
/* > \endverbatim */
/* > */
/* > \param[in] N */
/* > \verbatim */
/* >          N is INTEGER */
/* >           On entry,  N specifies the order of the matrix C.  N must be */
/* >           at least zero. */
/* > \endverbatim */
/* > */
/* > \param[in] K */
/* > \verbatim */
/* >          K is INTEGER */
/* >           On entry with  TRANS = 'N' or 'n',  K  specifies  the number */
/* >           of  columns   of  the   matrix   A,   and  on   entry   with */
/* >           TRANS = 'C' or 'c',  K  specifies  the number of rows of the */
/* >           matrix A.  K must be at least zero. */
/* > \endverbatim */
/* > */
/* > \param[in] ALPHA */
/* > \verbatim */
/* >          ALPHA is REAL */
/* >           On entry, ALPHA specifies the scalar alpha. */
/* > \endverbatim */
/* > */
/* > \param[in] A */
/* > \verbatim */
/* >          A is COMPLEX array, dimension ( LDA, ka ), where ka is */
/* >           k  when  TRANS = 'N' or 'n',  and is  n  otherwise. */
/* >           Before entry with  TRANS = 'N' or 'n',  the  leading  n by k */
/* >           part of the array  A  must contain the matrix  A,  otherwise */
/* >           the leading  k by n  part of the array  A  must contain  the */
/* >           matrix A. */
/* > \endverbatim */
/* > */
/* > \param[in] LDA */
/* > \verbatim */
/* >          LDA is INTEGER */
/* >           On entry, LDA specifies the first dimension of A as declared */
/* >           in  the  calling  (sub)  program.   When  TRANS = 'N' or 'n' */
/* >           then  LDA must be at least  max( 1, n ), otherwise  LDA must */
/* >           be at least  max( 1, k ). */
/* > \endverbatim */
/* > */
/* > \param[in] BETA */
/* > \verbatim */
/* >          BETA is REAL */
/* >           On entry, BETA specifies the scalar beta. */
/* > \endverbatim */
/* > */
/* > \param[in,out] C */
/* > \verbatim */
/* >          C is COMPLEX array, dimension ( LDC, N ) */
/* >           Before entry  with  UPLO = 'U' or 'u',  the leading  n by n */
/* >           upper triangular part of the array C must contain the upper */
/* >           triangular part  of the  hermitian matrix  and the strictly */
/* >           lower triangular part of C is not referenced.  On exit, the */
/* >           upper triangular part of the array  C is overwritten by the */
/* >           upper triangular part of the updated matrix. */
/* >           Before entry  with  UPLO = 'L' or 'l',  the leading  n by n */
/* >           lower triangular part of the array C must contain the lower */
/* >           triangular part  of the  hermitian matrix  and the strictly */
/* >           upper triangular part of C is not referenced.  On exit, the */
/* >           lower triangular part of the array  C is overwritten by the */
/* >           lower triangular part of the updated matrix. */
/* >           Note that the imaginary parts of the diagonal elements need */
/* >           not be set,  they are assumed to be zero,  and on exit they */
/* >           are set to zero. */
/* > \endverbatim */
/* > */
/* > \param[in] LDC */
/* > \verbatim */
/* >          LDC is INTEGER */
/* >           On entry, LDC specifies the first dimension of C as declared */
/* >           in  the  calling  (sub)  program.   LDC  must  be  at  least */
/* >           max( 1, n ). */
/* > \endverbatim */

/*  Authors: */
/*  ======== */

/* > \author Univ. of Tennessee */
/* > \author Univ. of California Berkeley */
/* > \author Univ. of Colorado Denver */
/* > \author NAG Ltd. */

/* > \date December 2016 */

/* > \ingroup complex_blas_level3 */

/* > \par Further Details: */
/*  ===================== */
/* > */
/* > \verbatim */
/* > */
/* >  Level 3 Blas routine. */
/* > */
/* >  -- Written on 8-February-1989. */
/* >     Jack Dongarra, Argonne National Laboratory. */
/* >     Iain Duff, AERE Harwell. */
/* >     Jeremy Du Croz, Numerical Algorithms Group Ltd. */
/* >     Sven Hammarling, Numerical Algorithms Group Ltd. */
/* > */
/* >  -- Modified 8-Nov-93 to set C(J,J) to REAL( C(J,J) ) when BETA = 1. */
/* >     Ed Anderson, Cray Research Inc. */
/* > \endverbatim */
/* > */
/*  ===================================================================== */
/* Subroutine */ int cherk_(char *uplo, char *trans, integer *n, integer *k, 
	real *alpha, complex *a, integer *lda, real *beta, complex *c__, 
	integer *ldc, ftnlen uplo_len, ftnlen trans_len)
{
    /* System generated locals */
    integer a_dim1, a_offset, c_dim1, c_offset, i__1, i__2, i__3, i__4, i__5, 
	    i__6;
    real r__1;
    complex q__1, q__2, q__3;

    /* Builtin functions */
    void r_cnjg(complex *, complex *);

    /* Local variables */
    integer i__, j, l, info;
    complex temp;
    extern logical lsame_(char *, char *, ftnlen, ftnlen);
    integer nrowa;
    real rtemp;
    logical upper;
    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);


/*  -- Reference BLAS level3 routine (version 3.7.0) -- */
/*  -- Reference BLAS is a software package provided by Univ. of Tennessee,    -- */
/*  -- Univ. of California Berkeley, Univ. of Colorado Denver and NAG Ltd..-- */
/*     December 2016 */

/*     .. Scalar Arguments .. */
/*     .. */
/*     .. Array Arguments .. */
/*     .. */

/*  ===================================================================== */

/*     .. External Functions .. */
/*     .. */
/*     .. External Subroutines .. */
/*     .. */
/*     .. Intrinsic Functions .. */
/*     .. */
/*     .. Local Scalars .. */
/*     .. */
/*     .. Parameters .. */
/*     .. */

/*     Test the input parameters. */

    /* Parameter adjustments */
    a_dim1 = *lda;
    a_offset = 1 + a_dim1;
    a -= a_offset;
    c_dim1 = *ldc;
    c_offset = 1 + c_dim1;
    c__ -= c_offset;

    /* Function Body */
    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
	nrowa = *n;
    } else {
	nrowa = *k;
    }
    upper = lsame_(uplo, "U", (ftnlen)1, (ftnlen)1);

    info = 0;
    if (! upper && ! lsame_(uplo, "L", (ftnlen)1, (ftnlen)1)) {
	info = 1;
    } else if (! lsame_(trans, "N", (ftnlen)1, (ftnlen)1) && ! lsame_(trans, 
	    "C", (ftnlen)1, (ftnlen)1)) {
	info = 2;
    } else if (*n < 0) {
	info = 3;
    } else if (*k < 0) {
	info = 4;
    } else if (*lda < max(1,nrowa)) {
	info = 7;
    } else if (*ldc < max(1,*n)) {
	info = 10;
    }
    if (info != 0) {
	xerbla_("CHERK ", &info, (ftnlen)6);
	return 0;
    }

/*     Quick return if possible. */

    if (*n == 0 || (*alpha == 0.f || *k == 0) && *beta == 1.f) {
	return 0;
    }

/*     And when  alpha.eq.zero. */

    if (*alpha == 0.f) {
	if (upper) {
	    if (*beta == 0.f) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = j;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			i__3 = i__ + j * c_dim1;
			c__[i__3].r = 0.f, c__[i__3].i = 0.f;
/* L10: */
		    }
/* L20: */
		}
	    } else {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = j - 1;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			i__3 = i__ + j * c_dim1;
			i__4 = i__ + j * c_dim1;
			q__1.r = *beta * c__[i__4].r, q__1.i = *beta * c__[
				i__4].i;
			c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
/* L30: */
		    }
		    i__2 = j + j * c_dim1;
		    i__3 = j + j * c_dim1;
		    r__1 = *beta * c__[i__3].r;
		    c__[i__2].r = r__1, c__[i__2].i = 0.f;
/* L40: */
		}
	    }
	} else {
	    if (*beta == 0.f) {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = *n;
		    for (i__ = j; i__ <= i__2; ++i__) {
			i__3 = i__ + j * c_dim1;
			c__[i__3].r = 0.f, c__[i__3].i = 0.f;
/* L50: */
		    }
/* L60: */
		}
	    } else {
		i__1 = *n;
		for (j = 1; j <= i__1; ++j) {
		    i__2 = j + j * c_dim1;
		    i__3 = j + j * c_dim1;
		    r__1 = *beta * c__[i__3].r;
		    c__[i__2].r = r__1, c__[i__2].i = 0.f;
		    i__2 = *n;
		    for (i__ = j + 1; i__ <= i__2; ++i__) {
			i__3 = i__ + j * c_dim1;
			i__4 = i__ + j * c_dim1;
			q__1.r = *beta * c__[i__4].r, q__1.i = *beta * c__[
				i__4].i;
			c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
/* L70: */
		    }
/* L80: */
		}
	    }
	}
	return 0;
    }

/*     Start the operations. */

    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {

/*        Form  C := alpha*A*A**H + beta*C. */

	if (upper) {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		if (*beta == 0.f) {
		    i__2 = j;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			i__3 = i__ + j * c_dim1;
			c__[i__3].r = 0.f, c__[i__3].i = 0.f;
/* L90: */
		    }
		} else if (*beta != 1.f) {
		    i__2 = j - 1;
		    for (i__ = 1; i__ <= i__2; ++i__) {
			i__3 = i__ + j * c_dim1;
			i__4 = i__ + j * c_dim1;
			q__1.r = *beta * c__[i__4].r, q__1.i = *beta * c__[
				i__4].i;
			c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
/* L100: */
		    }
		    i__2 = j + j * c_dim1;
		    i__3 = j + j * c_dim1;
		    r__1 = *beta * c__[i__3].r;
		    c__[i__2].r = r__1, c__[i__2].i = 0.f;
		} else {
		    i__2 = j + j * c_dim1;
		    i__3 = j + j * c_dim1;
		    r__1 = c__[i__3].r;
		    c__[i__2].r = r__1, c__[i__2].i = 0.f;
		}
		i__2 = *k;
		for (l = 1; l <= i__2; ++l) {
		    i__3 = j + l * a_dim1;
		    if (a[i__3].r != 0.f || a[i__3].i != 0.f) {
			r_cnjg(&q__2, &a[j + l * a_dim1]);
			q__1.r = *alpha * q__2.r, q__1.i = *alpha * q__2.i;
			temp.r = q__1.r, temp.i = q__1.i;
			i__3 = j - 1;
			for (i__ = 1; i__ <= i__3; ++i__) {
			    i__4 = i__ + j * c_dim1;
			    i__5 = i__ + j * c_dim1;
			    i__6 = i__ + l * a_dim1;
			    q__2.r = temp.r * a[i__6].r - temp.i * a[i__6].i, 
				    q__2.i = temp.r * a[i__6].i + temp.i * a[
				    i__6].r;
			    q__1.r = c__[i__5].r + q__2.r, q__1.i = c__[i__5]
				    .i + q__2.i;
			    c__[i__4].r = q__1.r, c__[i__4].i = q__1.i;
/* L110: */
			}
			i__3 = j + j * c_dim1;
			i__4 = j + j * c_dim1;
			i__5 = i__ + l * a_dim1;
			q__1.r = temp.r * a[i__5].r - temp.i * a[i__5].i, 
				q__1.i = temp.r * a[i__5].i + temp.i * a[i__5]
				.r;
			r__1 = c__[i__4].r + q__1.r;
			c__[i__3].r = r__1, c__[i__3].i = 0.f;
		    }
/* L120: */
		}
/* L130: */
	    }
	} else {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		if (*beta == 0.f) {
		    i__2 = *n;
		    for (i__ = j; i__ <= i__2; ++i__) {
			i__3 = i__ + j * c_dim1;
			c__[i__3].r = 0.f, c__[i__3].i = 0.f;
/* L140: */
		    }
		} else if (*beta != 1.f) {
		    i__2 = j + j * c_dim1;
		    i__3 = j + j * c_dim1;
		    r__1 = *beta * c__[i__3].r;
		    c__[i__2].r = r__1, c__[i__2].i = 0.f;
		    i__2 = *n;
		    for (i__ = j + 1; i__ <= i__2; ++i__) {
			i__3 = i__ + j * c_dim1;
			i__4 = i__ + j * c_dim1;
			q__1.r = *beta * c__[i__4].r, q__1.i = *beta * c__[
				i__4].i;
			c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
/* L150: */
		    }
		} else {
		    i__2 = j + j * c_dim1;
		    i__3 = j + j * c_dim1;
		    r__1 = c__[i__3].r;
		    c__[i__2].r = r__1, c__[i__2].i = 0.f;
		}
		i__2 = *k;
		for (l = 1; l <= i__2; ++l) {
		    i__3 = j + l * a_dim1;
		    if (a[i__3].r != 0.f || a[i__3].i != 0.f) {
			r_cnjg(&q__2, &a[j + l * a_dim1]);
			q__1.r = *alpha * q__2.r, q__1.i = *alpha * q__2.i;
			temp.r = q__1.r, temp.i = q__1.i;
			i__3 = j + j * c_dim1;
			i__4 = j + j * c_dim1;
			i__5 = j + l * a_dim1;
			q__1.r = temp.r * a[i__5].r - temp.i * a[i__5].i, 
				q__1.i = temp.r * a[i__5].i + temp.i * a[i__5]
				.r;
			r__1 = c__[i__4].r + q__1.r;
			c__[i__3].r = r__1, c__[i__3].i = 0.f;
			i__3 = *n;
			for (i__ = j + 1; i__ <= i__3; ++i__) {
			    i__4 = i__ + j * c_dim1;
			    i__5 = i__ + j * c_dim1;
			    i__6 = i__ + l * a_dim1;
			    q__2.r = temp.r * a[i__6].r - temp.i * a[i__6].i, 
				    q__2.i = temp.r * a[i__6].i + temp.i * a[
				    i__6].r;
			    q__1.r = c__[i__5].r + q__2.r, q__1.i = c__[i__5]
				    .i + q__2.i;
			    c__[i__4].r = q__1.r, c__[i__4].i = q__1.i;
/* L160: */
			}
		    }
/* L170: */
		}
/* L180: */
	    }
	}
    } else {

/*        Form  C := alpha*A**H*A + beta*C. */

	if (upper) {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		i__2 = j - 1;
		for (i__ = 1; i__ <= i__2; ++i__) {
		    temp.r = 0.f, temp.i = 0.f;
		    i__3 = *k;
		    for (l = 1; l <= i__3; ++l) {
			r_cnjg(&q__3, &a[l + i__ * a_dim1]);
			i__4 = l + j * a_dim1;
			q__2.r = q__3.r * a[i__4].r - q__3.i * a[i__4].i, 
				q__2.i = q__3.r * a[i__4].i + q__3.i * a[i__4]
				.r;
			q__1.r = temp.r + q__2.r, q__1.i = temp.i + q__2.i;
			temp.r = q__1.r, temp.i = q__1.i;
/* L190: */
		    }
		    if (*beta == 0.f) {
			i__3 = i__ + j * c_dim1;
			q__1.r = *alpha * temp.r, q__1.i = *alpha * temp.i;
			c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
		    } else {
			i__3 = i__ + j * c_dim1;
			q__2.r = *alpha * temp.r, q__2.i = *alpha * temp.i;
			i__4 = i__ + j * c_dim1;
			q__3.r = *beta * c__[i__4].r, q__3.i = *beta * c__[
				i__4].i;
			q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + q__3.i;
			c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
		    }
/* L200: */
		}
		rtemp = 0.f;
		i__2 = *k;
		for (l = 1; l <= i__2; ++l) {
		    r_cnjg(&q__3, &a[l + j * a_dim1]);
		    i__3 = l + j * a_dim1;
		    q__2.r = q__3.r * a[i__3].r - q__3.i * a[i__3].i, q__2.i =
			     q__3.r * a[i__3].i + q__3.i * a[i__3].r;
		    q__1.r = rtemp + q__2.r, q__1.i = q__2.i;
		    rtemp = q__1.r;
/* L210: */
		}
		if (*beta == 0.f) {
		    i__2 = j + j * c_dim1;
		    r__1 = *alpha * rtemp;
		    c__[i__2].r = r__1, c__[i__2].i = 0.f;
		} else {
		    i__2 = j + j * c_dim1;
		    i__3 = j + j * c_dim1;
		    r__1 = *alpha * rtemp + *beta * c__[i__3].r;
		    c__[i__2].r = r__1, c__[i__2].i = 0.f;
		}
/* L220: */
	    }
	} else {
	    i__1 = *n;
	    for (j = 1; j <= i__1; ++j) {
		rtemp = 0.f;
		i__2 = *k;
		for (l = 1; l <= i__2; ++l) {
		    r_cnjg(&q__3, &a[l + j * a_dim1]);
		    i__3 = l + j * a_dim1;
		    q__2.r = q__3.r * a[i__3].r - q__3.i * a[i__3].i, q__2.i =
			     q__3.r * a[i__3].i + q__3.i * a[i__3].r;
		    q__1.r = rtemp + q__2.r, q__1.i = q__2.i;
		    rtemp = q__1.r;
/* L230: */
		}
		if (*beta == 0.f) {
		    i__2 = j + j * c_dim1;
		    r__1 = *alpha * rtemp;
		    c__[i__2].r = r__1, c__[i__2].i = 0.f;
		} else {
		    i__2 = j + j * c_dim1;
		    i__3 = j + j * c_dim1;
		    r__1 = *alpha * rtemp + *beta * c__[i__3].r;
		    c__[i__2].r = r__1, c__[i__2].i = 0.f;
		}
		i__2 = *n;
		for (i__ = j + 1; i__ <= i__2; ++i__) {
		    temp.r = 0.f, temp.i = 0.f;
		    i__3 = *k;
		    for (l = 1; l <= i__3; ++l) {
			r_cnjg(&q__3, &a[l + i__ * a_dim1]);
			i__4 = l + j * a_dim1;
			q__2.r = q__3.r * a[i__4].r - q__3.i * a[i__4].i, 
				q__2.i = q__3.r * a[i__4].i + q__3.i * a[i__4]
				.r;
			q__1.r = temp.r + q__2.r, q__1.i = temp.i + q__2.i;
			temp.r = q__1.r, temp.i = q__1.i;
/* L240: */
		    }
		    if (*beta == 0.f) {
			i__3 = i__ + j * c_dim1;
			q__1.r = *alpha * temp.r, q__1.i = *alpha * temp.i;
			c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
		    } else {
			i__3 = i__ + j * c_dim1;
			q__2.r = *alpha * temp.r, q__2.i = *alpha * temp.i;
			i__4 = i__ + j * c_dim1;
			q__3.r = *beta * c__[i__4].r, q__3.i = *beta * c__[
				i__4].i;
			q__1.r = q__2.r + q__3.r, q__1.i = q__2.i + q__3.i;
			c__[i__3].r = q__1.r, c__[i__3].i = q__1.i;
		    }
/* L250: */
		}
/* L260: */
	    }
	}
    }

    return 0;

/*     End of CHERK . */

} /* cherk_ */
