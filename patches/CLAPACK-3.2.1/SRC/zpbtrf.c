--- ../../../CLAPACK-3.2.1/SRC/zpbtrf.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zpbtrf.c	2020-03-18 14:52:00.266153839 +0100
@@ -42,8 +42,8 @@
 	    *, char *, char *, integer *, integer *, doublecomplex *, 
 	    doublecomplex *, integer *, doublecomplex *, integer *), zpbtf2_(char *, integer *, integer *, 
 	    doublecomplex *, integer *, integer *), zpotf2_(char *, 
-	    integer *, doublecomplex *, integer *, integer *), 
-	    xerbla_(char *, integer *);
+	    integer *, doublecomplex *, integer *, integer *);
+	void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
 
