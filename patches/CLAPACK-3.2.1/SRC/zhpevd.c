--- ../../../CLAPACK-3.2.1/SRC/zhpevd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zhpevd.c	2020-03-18 14:52:00.262153670 +0100
@@ -44,7 +44,8 @@
     extern doublereal dlamch_(char *);
     integer iscale;
     doublereal safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *), zdscal_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  zdscal_(
 	    integer *, doublereal *, doublecomplex *, integer *);
     doublereal bignum;
     integer indtau;
