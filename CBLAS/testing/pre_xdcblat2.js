const DATA = `'DBLAT2.SNAP'     NAME OF SNAPSHOT OUTPUT FILE
-1                UNIT NUMBER OF SNAPSHOT FILE (NOT USED IF .LT. 0)
F        LOGICAL FLAG, T TO REWIND SNAPSHOT FILE AFTER EACH RECORD.
F        LOGICAL FLAG, T TO STOP ON FAILURES.
T        LOGICAL FLAG, T TO TEST ERROR EXITS.
2        0 TO TEST COLUMN-MAJOR, 1 TO TEST ROW-MAJOR, 2 TO TEST BOTH
16.0     THRESHOLD VALUE OF TEST RATIO
6                 NUMBER OF VALUES OF N
0 1 2 3 5 9       VALUES OF N
4                 NUMBER OF VALUES OF K
0 1 2 4           VALUES OF K
4                 NUMBER OF VALUES OF INCX AND INCY
1 2 -1 -2         VALUES OF INCX AND INCY
3                 NUMBER OF VALUES OF ALPHA
0.0 1.0 0.7       VALUES OF ALPHA
3                 NUMBER OF VALUES OF BETA
0.0 1.0 0.9       VALUES OF BETA
cblas_dgemv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_dgbmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_dsymv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_dsbmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_dspmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_dtrmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_dtbmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_dtpmv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_dtrsv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_dtbsv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_dtpsv  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_dger   T PUT F FOR NO TEST. SAME COLUMNS.
cblas_dsyr   T PUT F FOR NO TEST. SAME COLUMNS.
cblas_dspr   T PUT F FOR NO TEST. SAME COLUMNS.
cblas_dsyr2  T PUT F FOR NO TEST. SAME COLUMNS.
cblas_dspr2  T PUT F FOR NO TEST. SAME COLUMNS.
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
