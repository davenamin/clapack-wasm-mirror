--- ../../../CLAPACK-3.2.1/SRC/cgeequb.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgeequb.c	2020-03-18 14:52:00.186150466 +0100
@@ -28,7 +28,7 @@
     integer i__, j;
     real radix, rcmin, rcmax;
     extern doublereal slamch_(char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum, logrdx, smlnum;
 
 
