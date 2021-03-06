const DATA = `'CBLAT2.SNAP'     NAME OF SNAPSHOT OUTPUT FILE
-1                UNIT NUMBER OF SNAPSHOT FILE (NOT USED IF .LT. 0)
F        LOGICAL FLAG, T TO REWIND SNAPSHOT FILE AFTER EACH RECORD.
F        LOGICAL FLAG, T TO STOP ON FAILURES.
T        LOGICAL FLAG, T TO TEST ERROR EXITS.
2        LOGICAL FLAG, T TO TEST ROW-MAJOR (IF FALSE COLUMN-MAJOR IS TESTED)
16.0     THRESHOLD VALUE OF TEST RATIO
6                 NUMBER OF VALUES OF N
0 1 2 3 5 9       VALUES OF N
4                 NUMBER OF VALUES OF K
0 1 2 4           VALUES OF K
4                 NUMBER OF VALUES OF INCX AND INCY
1 2 -1 -2         VALUES OF INCX AND INCY
3                 NUMBER OF VALUES OF ALPHA
(0.0,0.0) (1.0,0.0) (0.7,-0.9)       VALUES OF ALPHA
3                 NUMBER OF VALUES OF BETA
(0.0,0.0) (1.0,0.0) (1.3,-1.1)       VALUES OF BETA
cblas_cgemv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_cgbmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_chemv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_chbmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_chpmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_ctrmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_ctbmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_ctpmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_ctrsv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_ctbsv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_ctpsv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_cgerc  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_cgeru  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_cher   T PUT F FOR NO TEST. SAME COLUMNS.
cblas_chpr   T PUT F FOR NO TEST. SAME COLUMNS.
cblas_cher2  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_chpr2  T PUT F FOR NO TEST. SAME COLUMNS.
`

let i = 0;

Module = {
  preRun: function() {
    function stdin() {
      if (i < DATA.length) {
        const code = DATA.charCodeAt(i);
        ++i;
        return code;
      } else {
        return null;
      }
    }

    function stdout(asciiCode) {
      document.getElementById('output').value += String.fromCharCode(asciiCode);
    }

    FS.init(stdin, stdout);
  }
};
