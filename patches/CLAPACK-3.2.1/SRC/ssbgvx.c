--- ../../../CLAPACK-3.2.1/SRC/ssbgvx.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/ssbgvx.c	2020-03-18 14:52:00.254153333 +0100
@@ -48,7 +48,7 @@
     logical wantz, alleig, indeig;
     integer indibl;
     logical valeig;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer indisp, indiwo;
     extern /* Subroutine */ int slacpy_(char *, integer *, integer *, real *, 
 	    integer *, real *, integer *);
