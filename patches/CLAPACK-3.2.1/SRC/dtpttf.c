--- ../../../CLAPACK-3.2.1/SRC/dtpttf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dtpttf.c	2020-03-18 14:52:00.246152995 +0100
@@ -24,7 +24,7 @@
     logical normaltransr;
     extern logical lsame_(char *, char *);
     logical lower;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     logical nisodd;
 
 
