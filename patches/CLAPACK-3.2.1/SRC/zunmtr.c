--- ../../../CLAPACK-3.2.1/SRC/zunmtr.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zunmtr.c	2020-03-18 14:52:00.270154007 +0100
@@ -30,7 +30,7 @@
     char ch__1[2];
 
     /* Builtin functions */
-    /* Subroutine */ int s_cat(char *, char **, integer *, integer *, ftnlen);
+    /* Subroutine */ void s_cat(char *, char **, integer *, integer *, ftnlen);
 
     /* Local variables */
     integer i1, i2, nb, mi, ni, nq, nw;
@@ -38,7 +38,7 @@
     extern logical lsame_(char *, char *);
     integer iinfo;
     logical upper;
-    extern /* Subroutine */ int xerbla_(char *, integer *);
+    extern /* Subroutine */ void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     integer lwkopt;
