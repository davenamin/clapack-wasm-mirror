--- ../../../CLAPACK-3.2.1/SRC/zunglq.c	2009-08-08 00:32:18.000000000 +0200
+++ CLAPACK-3.2.1///SRC/zunglq.c	2020-03-18 14:52:00.270154007 +0100
@@ -31,7 +31,8 @@
     integer i__, j, l, ib, nb, ki, kk, nx, iws, nbmin, iinfo;
     extern /* Subroutine */ int zungl2_(integer *, integer *, integer *, 
 	    doublecomplex *, integer *, doublecomplex *, doublecomplex *, 
-	    integer *), xerbla_(char *, integer *);
+	    integer *);
+    void xerbla_(char *, integer *);
     extern integer ilaenv_(integer *, char *, char *, integer *, integer *, 
 	    integer *, integer *);
     extern /* Subroutine */ int zlarfb_(char *, char *, char *, char *, 
