--- ../../../CLAPACK-3.2.1/SRC/dgesvd.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/dgesvd.c	2020-03-18 14:52:00.226152152 +0100
@@ -35,7 +35,7 @@
     char ch__1[2];
 
     /* Builtin functions */
-    /* Subroutine */ int s_cat(char *, char **, integer *, integer *, ftnlen);
+    /* Subroutine */ void s_cat(char *, char **, integer *, integer *, ftnlen);
     double sqrt(doublereal);
 
     /* Local variables */
@@ -71,7 +71,7 @@
 	    doublereal *, integer *, doublereal *, doublereal *, integer *, 
 	    integer *);
     doublereal bignum;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int dormbr_(char *, char *, char *, integer *, 
