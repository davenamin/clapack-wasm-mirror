const DATA = `'ZBLAT2.SNAP'     NAME OF SNAPSHOT OUTPUT FILE
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
cblas_zgemv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_zgbmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_zhemv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_zhbmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_zhpmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_ztrmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_ztbmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_ztpmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_ztrsv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_ztbsv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_ztpsv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_zgerc  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_zgeru  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_zher   T PUT F FOR NO TEST. SAME COLUMNS.
cblas_zhpr   T PUT F FOR NO TEST. SAME COLUMNS.
cblas_zher2  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_zhpr2  T PUT F FOR NO TEST. SAME COLUMNS.
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
