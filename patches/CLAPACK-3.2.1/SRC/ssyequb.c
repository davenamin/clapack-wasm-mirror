--- ../../../CLAPACK-3.2.1/SRC/ssyequb.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssyequb.c	2020-03-18 14:52:00.258153501 +0100
@@ -38,7 +38,7 @@
     extern logical lsame_(char *, char *);
     real sumsq;
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     extern /* Subroutine */ int slassq_(integer *, real *, integer *, real *, 
 	    real *);
