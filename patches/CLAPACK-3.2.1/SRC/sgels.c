--- ../../../CLAPACK-3.2.1/SRC/sgels.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/sgels.c	2020-03-18 14:52:00.246152995 +0100
@@ -39,7 +39,7 @@
     extern /* Subroutine */ int slabad_(real *, real *);
     extern doublereal slamch_(char *), slange_(char *, integer *, 
 	    integer *, real *, integer *, real *);
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer scllen;
