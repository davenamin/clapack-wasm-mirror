--- ../../../CLAPACK-3.2.1/SRC/dsptri.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dsptri.c	2020-03-18 14:52:00.242152827 +0100
@@ -44,7 +44,7 @@
 	    doublereal *, doublereal *, integer *, doublereal *, doublereal *, 
 	     integer *);
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     integer kcnext;
 
 
