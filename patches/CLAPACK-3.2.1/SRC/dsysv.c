--- ../../../CLAPACK-3.2.1/SRC/dsysv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsysv.c	2020-03-18 14:52:00.242152827 +0100
@@ -28,7 +28,7 @@
     /* Local variables */
     integer nb;
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int dsytrf_(char *, integer *, doublereal *, 
