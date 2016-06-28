
para la funcion 'test1' (multiplicacion de matrices con 3 bucles )

cs11@cs11:~/Desktop/m$ valgrind --tool=cachegrind ./t1
==3473== Cachegrind, a cache and branch-prediction profiler
==3473== Copyright (C) 2002-2013, and GNU GPL'd, by Nicholas Nethercote et al.
==3473== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==3473== Command: ./t1
==3473== 
--3473-- warning: L3 cache found, using its data for the LL simulation.
"multiplicado" multiplicado
==3473== 
==3473== I   refs:      14,124,468
==3473== I1  misses:         1,371
==3473== LLi misses:         1,336
==3473== I1  miss rate:       0.00%
==3473== LLi miss rate:       0.00%
==3473== 
==3473== D   refs:       5,716,834  (5,256,485 rd   + 460,349 wr)
==3473== D1  misses:        64,567  (   61,400 rd   +   3,167 wr)
==3473== LLd misses:         7,963  (    5,263 rd   +   2,700 wr)
==3473== D1  miss rate:        1.1% (      1.1%     +     0.6%  )
==3473== LLd miss rate:        0.1% (      0.1%     +     0.5%  )
==3473== 
==3473== LL refs:           65,938  (   62,771 rd   +   3,167 wr)
==3473== LL misses:          9,299  (    6,599 rd   +   2,700 wr)
==3473== LL miss rate:         0.0% (      0.0%     +     0.5%  )
========================================================================
para la funcion 'test2' (inverted bloked 6 bucles )

cs11@cs11:~/Desktop/m$ valgrind --tool=cachegrind ./t2
==3493== Cachegrind, a cache and branch-prediction profiler
==3493== Copyright (C) 2002-2013, and GNU GPL'd, by Nicholas Nethercote et al.
==3493== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==3493== Command: ./t2
==3493== 
--3493-- warning: L3 cache found, using its data for the LL simulation.
bloque1: 1 bloque2: 1 bloque3: 1
==3493== 
==3493== I   refs:      22,258,572
==3493== I1  misses:         1,383
==3493== LLi misses:         1,347
==3493== I1  miss rate:       0.00%
==3493== LLi miss rate:       0.00%
==3493== 
==3493== D   refs:      10,844,409  (9,556,575 rd   + 1,287,834 wr)
==3493== D1  misses:        64,233  (   61,063 rd   +     3,170 wr)
==3493== LLd misses:         8,071  (    5,377 rd   +     2,694 wr)
==3493== D1  miss rate:        0.5% (      0.6%     +       0.2%  )
==3493== LLd miss rate:        0.0% (      0.0%     +       0.2%  )
==3493== 
==3493== LL refs:           65,616  (   62,446 rd   +     3,170 wr)
==3493== LL misses:          9,418  (    6,724 rd   +     2,694 wr)
==3493== LL miss rate:         0.0% (      0.0%     +       0.2%  )
cs11@cs11:~/Desktop/m$ 

========================================================================
para la funcion 'test1' (multiplicacion de matrices con 3 bucles ) 500

cs11@cs11:~/Desktop/m$ valgrind --tool=cachegrind ./t1
==3528== Cachegrind, a cache and branch-prediction profiler
==3528== Copyright (C) 2002-2013, and GNU GPL'd, by Nicholas Nethercote et al.
==3528== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==3528== Command: ./t1
==3528== 
--3528-- warning: L3 cache found, using its data for the LL simulation.
"multiplicado" multiplicado
==3528== 
==3528== I   refs:      5,789,615,603
==3528== I1  misses:            1,370
==3528== LLi misses:            1,334
==3528== I1  miss rate:          0.00%
==3528== LLi miss rate:          0.00%
==3528== 
==3528== D   refs:      2,392,216,898  (2,262,591,549 rd   + 129,625,349 wr)
==3528== D1  misses:      112,917,154  (  112,821,776 rd   +      95,378 wr)
==3528== LLd misses:          100,177  (        5,263 rd   +      94,914 wr)
==3528== D1  miss rate:           4.7% (          4.9%     +         0.0%  )
==3528== LLd miss rate:           0.0% (          0.0%     +         0.0%  )
==3528== 
==3528== LL refs:         112,918,524  (  112,823,146 rd   +      95,378 wr)
==3528== LL misses:           101,511  (        6,597 rd   +      94,914 wr)
==3528== LL miss rate:            0.0% (          0.0%     +         0.0%  )

========================================================================

para la funcion 'test2' (inverted bloked 6 bucles ) 512


cs11@cs11:~/Desktop/m$ valgrind --tool=cachegrind ./t2
==3548== Cachegrind, a cache and branch-prediction profiler
==3548== Copyright (C) 2002-2013, and GNU GPL'd, by Nicholas Nethercote et al.
==3548== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==3548== Command: ./t2
==3548== 
--3548-- warning: L3 cache found, using its data for the LL simulation.
bloque1: 1 bloque2: 1 bloque3: 1
==3548== 
==3548== I   refs:      10,146,290,700
==3548== I1  misses:             1,385
==3548== LLi misses:             1,347
==3548== I1  miss rate:           0.00%
==3548== LLi miss rate:           0.00%
==3548== 
==3548== D   refs:       5,127,727,481  (4,583,392,863 rd   + 544,334,618 wr)
==3548== D1  misses:       134,689,064  (  134,589,137 rd   +      99,927 wr)
==3548== LLd misses:           104,948  (        5,486 rd   +      99,462 wr)
==3548== D1  miss rate:            2.6% (          2.9%     +         0.0%  )
==3548== LLd miss rate:            0.0% (          0.0%     +         0.0%  )
==3548== 
==3548== LL refs:          134,690,449  (  134,590,522 rd   +      99,927 wr)
==3548== LL misses:            106,295  (        6,833 rd   +      99,462 wr)
==3548== LL miss rate:             0.0% (          0.0%     +         0.0%  )


