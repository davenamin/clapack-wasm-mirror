--- ../../../CLAPACK-3.2.1/SRC/sstemr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sstemr.c	2020-03-18 14:52:00.258153501 +0100
@@ -68,7 +68,7 @@
     extern doublereal slamch_(char *);
     integer wbegin;
     real safmin;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     real bignum;
     integer inderr, iindwk, indgrs, offset;
     extern /* Subroutine */ int slarrc_(char *, integer *, real *, real *, 
