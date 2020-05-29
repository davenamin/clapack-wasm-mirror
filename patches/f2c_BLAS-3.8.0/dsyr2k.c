--- ../../../wasm-clapack/f2c_BLAS-3.8.0/dsyr2k.c	2020-05-25 14:11:58.213373002 +0200
+++ f2c_BLAS-3.8.0///dsyr2k.c	2020-05-25 14:56:39.623788362 +0200
@@ -204,10 +204,9 @@
 /* > \endverbatim */
 /* > */
 /*  ===================================================================== */
-/* Subroutine */ int dsyr2k_(char *uplo, char *trans, integer *n, integer *k, 
+/* Subroutine */ void dsyr2k_(char *uplo, char *trans, integer *n, integer *k, 
 	doublereal *alpha, doublereal *a, integer *lda, doublereal *b, 
-	integer *ldb, doublereal *beta, doublereal *c__, integer *ldc, ftnlen 
-	uplo_len, ftnlen trans_len)
+	integer *ldb, doublereal *beta, doublereal *c__, integer *ldc)
 {
     /* System generated locals */
     integer a_dim1, a_offset, b_dim1, b_offset, c_dim1, c_offset, i__1, i__2, 
@@ -216,10 +215,10 @@
     /* Local variables */
     integer i__, j, l, info;
     doublereal temp1, temp2;
-    extern logical lsame_(char *, char *, ftnlen, ftnlen);
+    extern  logical lsame_(char *, char *);
     integer nrowa;
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *, ftnlen);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- Reference BLAS level3 routine (version 3.7.0) -- */
@@ -259,19 +258,17 @@
     c__ -= c_offset;
 
     /* Function Body */
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 	nrowa = *n;
     } else {
 	nrowa = *k;
     }
-    upper = lsame_(uplo, "U", (ftnlen)1, (ftnlen)1);
+    upper = lsame_(uplo, "U");
 
     info = 0;
-    if (! upper && ! lsame_(uplo, "L", (ftnlen)1, (ftnlen)1)) {
+    if (! upper && ! lsame_(uplo, "L")) {
 	info = 1;
-    } else if (! lsame_(trans, "N", (ftnlen)1, (ftnlen)1) && ! lsame_(trans, 
-	    "T", (ftnlen)1, (ftnlen)1) && ! lsame_(trans, "C", (ftnlen)1, (
-	    ftnlen)1)) {
+    } else if (! lsame_(trans, "N") && ! lsame_(trans, "T") && ! lsame_(trans, "C")) {
 	info = 2;
     } else if (*n < 0) {
 	info = 3;
@@ -285,14 +282,14 @@
 	info = 12;
     }
     if (info != 0) {
-	xerbla_("DSYR2K", &info, (ftnlen)6);
-	return 0;
+	xerbla_("DSYR2K", &info);
+	return;
     }
 
 /*     Quick return if possible. */
 
     if (*n == 0 || (*alpha == 0. || *k == 0) && *beta == 1.) {
-	return 0;
+	return;
     }
 
 /*     And when  alpha.eq.zero. */
@@ -343,12 +340,12 @@
 		}
 	    }
 	}
-	return 0;
+	return;
     }
 
 /*     Start the operations. */
 
-    if (lsame_(trans, "N", (ftnlen)1, (ftnlen)1)) {
+    if (lsame_(trans, "N")) {
 
 /*        Form  C := alpha*A*B**T + alpha*B*A**T + C. */
 
@@ -474,7 +471,7 @@
 	}
     }
 
-    return 0;
+    return;
 
 /*     End of DSYR2K. */
 
