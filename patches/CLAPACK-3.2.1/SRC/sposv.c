--- ../../../CLAPACK-3.2.1/SRC/sposv.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sposv.c	2020-03-18 14:52:00.254153333 +0100
@@ -21,7 +21,8 @@
 
     /* Local variables */
     extern logical lsame_(char *, char *);
-    extern /* Subroutine */ int xerbla_(char *, integer *), spotrf_(
+    extern /* Subroutine */ void xerbla_(char *, integer *);
+    int  spotrf_(
 	    char *, integer *, real *, integer *, integer *), spotrs_(
 	    char *, integer *, integer *, real *, integer *, real *, integer *
 , integer *);
