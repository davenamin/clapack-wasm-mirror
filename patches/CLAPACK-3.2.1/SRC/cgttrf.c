--- ../../../CLAPACK-3.2.1/SRC/cgttrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/cgttrf.c	2020-03-18 14:52:00.194150804 +0100
@@ -28,7 +28,7 @@
     /* Local variables */
     integer i__;
     complex fact, temp;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
 
 
 /*  -- LAPACK routine (version 3.2) -- */
