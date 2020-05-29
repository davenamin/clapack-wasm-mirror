--- ../../../wasm-clapack/f2c_BLAS-3.8.0/zgerc.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///zgerc.c	2020-05-25 14:56:39.623788362 +0200
@@ -142,7 +142,7 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int zgerc_(integer *m, integer *n, doublecomplex *alpha, 
+/* Subroutine */ void zgerc_(integer *m, integer *n, doublecomplex *alpha, 
 	doublecomplex *x, integer *incx, doublecomplex *y, integer *incy, 
 	doublecomplex *a, integer *lda)
 {
@@ -156,7 +156,7 @@
     /* Local variables */
     integer i__, j, ix, jy, kx, info;
     doublecomplex temp;
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level2 routine (version 3.7.0) -- */
@@ -203,14 +203,14 @@
 	info = 9;
     }
     if (info != 0) {
-	xerbla_("ZGERC ", &info, (ftnlen)6);
-	return 0;
+	xerbla_("ZGERC ", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*m == 0 || *n == 0 || alpha->r == 0. && alpha->i == 0.) {
-	return 0;
+	return;
     }
 
 /*     Start the operations. In this version the elements of A are */
@@ -278,7 +278,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of ZGERC . */
 
