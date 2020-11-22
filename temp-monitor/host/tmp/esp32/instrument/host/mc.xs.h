/* XS GENERATED FILE; DO NOT EDIT! */

#include "xs.h"

#ifdef __cplusplus
extern "C" {
#endif
#define xsPreparation() xsPreparationAndCreation(NULL)
mxExport void* xsPreparationAndCreation(xsCreation **creation);

extern void xs_time_set(xsMachine* the);
extern void xs_time_timezone_get(xsMachine* the);
extern void xs_time_timezone_set(xsMachine* the);
extern void xs_time_dst_get(xsMachine* the);
extern void xs_time_dst_set(xsMachine* the);
extern void xs_time_ticks(xsMachine* the);
extern void xs_timer_set(xsMachine* the);
extern void xs_timer_repeat(xsMachine* the);
extern void xs_timer_schedule(xsMachine* the);
extern void xs_timer_clear(xsMachine* the);
extern void xs_timer_delay(xsMachine* the);
extern void Resource_destructor(void* data);
extern void Resource_constructor(xsMachine* the);
extern void Resource_exists(xsMachine* the);
extern void Resource_slice(xsMachine* the);
extern void xs_instrumentation_get(xsMachine* the);
extern void xs_socket_destructor(void* data);
extern void xs_socket(xsMachine* the);
extern void xs_socket_read(xsMachine* the);
extern void xs_socket_write(xsMachine* the);
extern void xs_socket_close(xsMachine* the);
extern void xs_socket_get(xsMachine* the);
extern void xs_listener_destructor(void* data);
extern void xs_listener(xsMachine* the);
extern void xs_listener_close(xsMachine* the);
extern void xs_net_get(xsMachine* the);
extern void xs_net_resolve(xsMachine* the);
extern void xs_sntp_packet(xsMachine* the);
extern void xs_sntp_toNumber(xsMachine* the);
extern void xs_wifi_destructor(void* data);
extern void xs_wifi_constructor(xsMachine* the);
extern void xs_wifi_close(xsMachine* the);
extern void xs_wifi_set_onNotify(xsMachine* the);
extern void xs_wifi_set_mode(xsMachine* the);
extern void xs_wifi_get_mode(xsMachine* the);
extern void xs_wifi_scan(xsMachine* the);
extern void xs_wifi_connect(xsMachine* the);
extern void xs_wifi_accessPoint(xsMachine* the);
extern void xs_ec2_add(xsMachine* the);
extern void xs_ec2_mul(xsMachine* the);
extern void xs_ec2_mul2(xsMachine* the);
extern void xs_mod2_mulinv_general(xsMachine* the);
extern void xs_mod2_mulinv_euclid(xsMachine* the);
extern void xs_mod2_exp(xsMachine* the);
extern void xs_mont2_exp_LR(xsMachine* the);
extern void xs_mont2_exp_SW(xsMachine* the);
extern void xs_bin_encode(xsMachine* the);
extern void xs_bin_decode(xsMachine* the);
extern void xs_crypt_Digest_destructor(void* data);
extern void xs_crypt_Digest(xsMachine* the);
extern void xs_crypt_Digest_write(xsMachine* the);
extern void xs_crypt_Digest_close(xsMachine* the);
extern void xs_crypt_Digest_reset(xsMachine* the);
extern void xs_crypt_Digest_get_blockSize(xsMachine* the);
extern void xs_crypt_Digest_get_outputSize(xsMachine* the);
extern void xs_ghash_init(xsMachine* the);
extern void xs_crypt_cipher_destructor(void* data);
extern void xs_crypt_cipher_constructor(xsMachine* the);
extern void xs_crypt_cipher_encrypt(xsMachine* the);
extern void xs_crypt_cipher_decrypt(xsMachine* the);
extern void xs_crypt_cipher_get_keySize(xsMachine* the);
extern void xs_crypt_cipher_get_blockSize(xsMachine* the);
extern void xs_crypt_streamcipher_destructor(void* data);
extern void xs_crypt_streamcipher_constructor(xsMachine* the);
extern void xs_crypt_streamcipher_process(xsMachine* the);
extern void xs_crypt_streamcipher_process(xsMachine* the);
extern void xs_crypt_streamcipher_setIV(xsMachine* the);
extern void xs_crypt_mode_delete(void* data);
extern void xs_crypt_mode_constructor(xsMachine* the);
extern void xs_crypt_mode_encrypt(xsMachine* the);
extern void xs_crypt_mode_decrypt(xsMachine* the);
extern void xs_crypt_mode_setIV(xsMachine* the);
extern void xs_crypt_mode_get_eof(xsMachine* the);
extern void xs_crypt_mode_set_eof(xsMachine* the);
extern void xs_rng_get(xsMachine* the);
extern void xs_rng_init(xsMachine* the);
extern void xs_x509_decodeSPKI(xsMachine* the);
extern void xs_x509_decodeExtension(xsMachine* the);
extern void xs_securesocket_read(xsMachine* the);
extern void xs_securesocket_write(xsMachine* the);
extern void xs_base64_encode(xsMachine* the);
extern void xs_base64_decode(xsMachine* the);
extern void xs_hex_toString(xsMachine* the);
extern void xs_hex_toBuffer(xsMachine* the);
extern void xs_file_destructor(void* data);
extern void xs_File(xsMachine* the);
extern void xs_file_read(xsMachine* the);
extern void xs_file_write(xsMachine* the);
extern void xs_file_close(xsMachine* the);
extern void xs_file_get_length(xsMachine* the);
extern void xs_file_get_position(xsMachine* the);
extern void xs_file_set_position(xsMachine* the);
extern void xs_file_delete(xsMachine* the);
extern void xs_file_exists(xsMachine* the);
extern void xs_file_rename(xsMachine* the);
extern void xs_file_iterator_destructor(void* data);
extern void xs_File_Iterator(xsMachine* the);
extern void xs_file_iterator_next(xsMachine* the);
extern void xs_directory_create(xsMachine* the);
extern void xs_directory_delete(xsMachine* the);
extern void xs_file_system_config(xsMachine* the);
extern void xs_file_system_info(xsMachine* the);
extern void xs_loadmod_has(xsMachine* the);
extern void xs_loadmod_load(xsMachine* the);
extern void xs_logical_xor(xsMachine* the);
extern void xs_logical_and(xsMachine* the);
extern void xs_logical_or(xsMachine* the);
extern void xs_flash_destructor(void* data);
extern void xs_flash(xsMachine* the);
extern void xs_flash_erase(xsMachine* the);
extern void xs_flash_read(xsMachine* the);
extern void xs_flash_write(xsMachine* the);
extern void xs_flash_map(xsMachine* the);
extern void xs_flash_byteLength(xsMachine* the);
extern void xs_flash_blockSize(xsMachine* the);
extern void xs_dnspacket_get_id(xsMachine* the);
extern void xs_dnspacket_get_flags(xsMachine* the);
extern void xs_dnspacket_get_questions(xsMachine* the);
extern void xs_dnspacket_get_answers(xsMachine* the);
extern void xs_dnspacket_get_authorities(xsMachine* the);
extern void xs_dnspacket_get_additionals(xsMachine* the);
extern void xs_dnspacket_question(xsMachine* the);
extern void xs_dnspacket_answer(xsMachine* the);
extern void xs_analog_read(xsMachine* the);
#ifdef __cplusplus
}
#endif

#define xsID_AggregateError -32754
#define xsID_Array -32753
#define xsID_ArrayBuffer -32752
#define xsID_Atomics -32751
#define xsID_BigInt -32750
#define xsID_BigInt64Array -32749
#define xsID_BigUint64Array -32748
#define xsID_Boolean -32747
#define xsID_DataView -32746
#define xsID_Date -32745
#define xsID_Error -32744
#define xsID_EvalError -32743
#define xsID_FinalizationRegistry -32742
#define xsID_Float32Array -32741
#define xsID_Float64Array -32740
#define xsID_Int16Array -32739
#define xsID_Int32Array -32738
#define xsID_Int8Array -32737
#define xsID_JSON -32736
#define xsID_Map -32735
#define xsID_Math -32734
#define xsID_Number -32733
#define xsID_Object -32732
#define xsID_Promise -32731
#define xsID_Proxy -32730
#define xsID_RangeError -32729
#define xsID_ReferenceError -32728
#define xsID_Reflect -32727
#define xsID_RegExp -32726
#define xsID_Set -32725
#define xsID_SharedArrayBuffer -32724
#define xsID_String -32723
#define xsID_Symbol -32722
#define xsID_SyntaxError -32721
#define xsID_TypeError -32720
#define xsID_TypedArray -32719
#define xsID_URIError -32718
#define xsID_Uint16Array -32717
#define xsID_Uint32Array -32716
#define xsID_Uint8Array -32715
#define xsID_Uint8ClampedArray -32714
#define xsID_WeakMap -32713
#define xsID_WeakRef -32712
#define xsID_WeakSet -32711
#define xsID_decodeURI -32710
#define xsID_decodeURIComponent -32709
#define xsID_encodeURI -32708
#define xsID_encodeURIComponent -32707
#define xsID_escape -32706
#define xsID_isFinite -32705
#define xsID_isNaN -32704
#define xsID_parseFloat -32703
#define xsID_parseInt -32702
#define xsID_trace -32701
#define xsID_unescape -32700
#define xsID_Infinity -32699
#define xsID_NaN -32698
#define xsID_undefined -32697
#define xsID_Compartment -32696
#define xsID_Function -32695
#define xsID_eval -32694
#define xsID_AsyncFunction -32693
#define xsID_AsyncGeneratorFunction -32692
#define xsID_BYTES_PER_ELEMENT -32691
#define xsID_E -32690
#define xsID_EPSILON -32689
#define xsID_Generator -32688
#define xsID_GeneratorFunction -32687
#define xsID_LN10 -32686
#define xsID_LN2 -32685
#define xsID_LOG10E -32684
#define xsID_LOG2E -32683
#define xsID_MAX_SAFE_INTEGER -32682
#define xsID_MAX_VALUE -32681
#define xsID_MIN_SAFE_INTEGER -32680
#define xsID_MIN_VALUE -32679
#define xsID_NEGATIVE_INFINITY -32678
#define xsID_PI -32677
#define xsID_POSITIVE_INFINITY -32676
#define xsID_SQRT1_2 -32675
#define xsID_SQRT2 -32674
#define xsID_UTC -32673
#define xsID___defineGetter__ -32672
#define xsID___defineSetter__ -32671
#define xsID___lookupGetter__ -32670
#define xsID___lookupSetter__ -32669
#define xsID___proto__ -32668
#define xsID_abs -32667
#define xsID_acos -32666
#define xsID_acosh -32665
#define xsID_add -32664
#define xsID_aliases -32663
#define xsID_all -32662
#define xsID_allSettled -32661
#define xsID_and -32660
#define xsID_any -32659
#define xsID_append -32658
#define xsID_apply -32657
#define xsID_arguments -32656
#define xsID_asIntN -32655
#define xsID_asUintN -32654
#define xsID_asin -32653
#define xsID_asinh -32652
#define xsID_assign -32651
#define xsID_asyncIterator -32650
#define xsID_atan -32649
#define xsID_atanh -32648
#define xsID_atan2 -32647
#define xsID_bind -32646
#define xsID_bitLength -32645
#define xsID_boundArguments -32644
#define xsID_boundFunction -32643
#define xsID_boundThis -32642
#define xsID_buffer -32641
#define xsID_busy -32640
#define xsID_byteLength -32639
#define xsID_byteOffset -32638
#define xsID_cache -32637
#define xsID_call -32636
#define xsID_callee -32635
#define xsID_caller -32634
#define xsID_catch -32633
#define xsID_cbrt -32632
#define xsID_ceil -32631
#define xsID_center -32630
#define xsID_charAt -32629
#define xsID_charCodeAt -32628
#define xsID_chunk -32627
#define xsID_chunkify -32626
#define xsID_cleanupSome -32625
#define xsID_clear -32624
#define xsID_closure -32623
#define xsID_clz32 -32622
#define xsID_codePointAt -32621
#define xsID_compare -32620
#define xsID_compareExchange -32619
#define xsID_compile -32618
#define xsID_concat -32617
#define xsID_configurable -32616
#define xsID_console -32615
#define xsID_construct -32614
#define xsID_constructor -32613
#define xsID_copyWithin -32612
#define xsID_cos -32611
#define xsID_cosh -32610
#define xsID_count -32609
#define xsID_create -32608
#define xsID_default -32607
#define xsID_defineProperties -32606
#define xsID_defineProperty -32605
#define xsID_delete -32604
#define xsID_deleteProperty -32603
#define xsID_deref -32602
#define xsID_description -32601
#define xsID_done -32600
#define xsID_dotAll -32599
#define xsID_eachDown -32598
#define xsID_eachUp -32597
#define xsID_endsWith -32596
#define xsID_entries -32595
#define xsID_enumerable -32594
#define xsID_enumerate -32593
#define xsID_errors -32592
#define xsID_evaluate -32591
#define xsID_every -32590
#define xsID_exchange -32589
#define xsID_exec -32588
#define xsID_exp -32587
#define xsID_expm1 -32586
#define xsID_export -32585
#define xsID_fill -32584
#define xsID_filter -32583
#define xsID_finally -32582
#define xsID_find -32581
#define xsID_findIndex -32580
#define xsID_flags -32579
#define xsID_flat -32578
#define xsID_flatMap -32577
#define xsID_floor -32576
#define xsID_for -32575
#define xsID_forEach -32574
#define xsID_free -32573
#define xsID_freeze -32572
#define xsID_from -32571
#define xsID_fromArrayBuffer -32570
#define xsID_fromBigInt -32569
#define xsID_fromCharCode -32568
#define xsID_fromCodePoint -32567
#define xsID_fromEntries -32566
#define xsID_fromString -32565
#define xsID_fround -32564
#define xsID_function -32563
#define xsID_get -32562
#define xsID_getBigInt64 -32561
#define xsID_getBigUint64 -32560
#define xsID_getDate -32559
#define xsID_getDay -32558
#define xsID_getFloat32 -32557
#define xsID_getFloat64 -32556
#define xsID_getFullYear -32555
#define xsID_getHours -32554
#define xsID_getInt16 -32553
#define xsID_getInt32 -32552
#define xsID_getInt8 -32551
#define xsID_getMilliseconds -32550
#define xsID_getMinutes -32549
#define xsID_getMonth -32548
#define xsID_getOwnPropertyDescriptor -32547
#define xsID_getOwnPropertyDescriptors -32546
#define xsID_getOwnPropertyNames -32545
#define xsID_getOwnPropertySymbols -32544
#define xsID_getPrototypeOf -32543
#define xsID_getSeconds -32542
#define xsID_getTime -32541
#define xsID_getTimezoneOffset -32540
#define xsID_getUTCDate -32539
#define xsID_getUTCDay -32538
#define xsID_getUTCFullYear -32537
#define xsID_getUTCHours -32536
#define xsID_getUTCMilliseconds -32535
#define xsID_getUTCMinutes -32534
#define xsID_getUTCMonth -32533
#define xsID_getUTCSeconds -32532
#define xsID_getUint16 -32531
#define xsID_getUint32 -32530
#define xsID_getUint8 -32529
#define xsID_getUint8Clamped -32528
#define xsID_getYear -32527
#define xsID_global -32526
#define xsID_globalThis -32525
#define xsID_groups -32524
#define xsID_has -32523
#define xsID_hasInstance -32522
#define xsID_hasOwnProperty -32521
#define xsID_hypot -32520
#define xsID_id -32519
#define xsID_idiv -32518
#define xsID_idivmod -32517
#define xsID_ignoreCase -32516
#define xsID_imod -32515
#define xsID_import -32514
#define xsID_importNow -32513
#define xsID_imul -32512
#define xsID_imuldiv -32511
#define xsID_includes -32510
#define xsID_index -32509
#define xsID_indexOf -32508
#define xsID_indices -32507
#define xsID_input -32506
#define xsID_irem -32505
#define xsID_is -32504
#define xsID_isArray -32503
#define xsID_isConcatSpreadable -32502
#define xsID_isExtensible -32501
#define xsID_isFrozen -32500
#define xsID_isInteger -32499
#define xsID_isLockFree -32498
#define xsID_isPrototypeOf -32497
#define xsID_isSafeInteger -32496
#define xsID_isSealed -32495
#define xsID_isView -32494
#define xsID_iterable -32493
#define xsID_iterator -32492
#define xsID_join -32491
#define xsID_keyFor -32490
#define xsID_keys -32489
#define xsID_lastIndex -32488
#define xsID_lastIndexOf -32487
#define xsID_left -32486
#define xsID_length -32485
#define xsID_line -32484
#define xsID_load -32483
#define xsID_local -32482
#define xsID_localeCompare -32481
#define xsID_log -32480
#define xsID_log1p -32479
#define xsID_log10 -32478
#define xsID_log2 -32477
#define xsID_map -32476
#define xsID_match -32475
#define xsID_matchAll -32474
#define xsID_max -32473
#define xsID_message -32472
#define xsID_min -32471
#define xsID_mod -32470
#define xsID_multiline -32469
#define xsID_name -32468
#define xsID_next -32466
#define xsID_normalize -32465
#define xsID_notify -32464
#define xsID_now -32463
#define xsID_of -32462
#define xsID_or -32461
#define xsID_ownKeys -32460
#define xsID_padEnd -32459
#define xsID_padStart -32458
#define xsID_parse -32457
#define xsID_path -32456
#define xsID_peek -32455
#define xsID_poke -32454
#define xsID_pop -32453
#define xsID_pow -32452
#define xsID_preventExtensions -32451
#define xsID_propertyIsEnumerable -32450
#define xsID_propertyIsScriptable -32449
#define xsID_prototype -32448
#define xsID_proxy -32447
#define xsID_push -32446
#define xsID_race -32445
#define xsID_random -32444
#define xsID_raw -32443
#define xsID_reason -32442
#define xsID_reduce -32441
#define xsID_reduceRight -32440
#define xsID_register -32439
#define xsID_reject -32438
#define xsID_repeat -32437
#define xsID_replace -32436
#define xsID_replaceAll -32435
#define xsID_resolve -32434
#define xsID_result -32433
#define xsID_return -32432
#define xsID_reverse -32431
#define xsID_revocable -32430
#define xsID_revoke -32429
#define xsID_right -32428
#define xsID_round -32427
#define xsID_seal -32426
#define xsID_search -32425
#define xsID_set -32424
#define xsID_setBigInt64 -32423
#define xsID_setBigUint64 -32422
#define xsID_setDate -32421
#define xsID_setFloat32 -32420
#define xsID_setFloat64 -32419
#define xsID_setFullYear -32418
#define xsID_setHours -32417
#define xsID_setInt16 -32416
#define xsID_setInt32 -32415
#define xsID_setInt8 -32414
#define xsID_setMilliseconds -32413
#define xsID_setMinutes -32412
#define xsID_setMonth -32411
#define xsID_setPrototypeOf -32410
#define xsID_setSeconds -32409
#define xsID_setTime -32408
#define xsID_setUTCDate -32407
#define xsID_setUTCFullYear -32406
#define xsID_setUTCHours -32405
#define xsID_setUTCMilliseconds -32404
#define xsID_setUTCMinutes -32403
#define xsID_setUTCMonth -32402
#define xsID_setUTCSeconds -32401
#define xsID_setUint16 -32400
#define xsID_setUint32 -32399
#define xsID_setUint8 -32398
#define xsID_setUint8Clamped -32397
#define xsID_setYear -32396
#define xsID_shift -32395
#define xsID_sign -32394
#define xsID_sin -32393
#define xsID_sinh -32392
#define xsID_size -32391
#define xsID_slice -32390
#define xsID_some -32389
#define xsID_sort -32388
#define xsID_source -32387
#define xsID_species -32386
#define xsID_splice -32385
#define xsID_split -32384
#define xsID_sqrt -32383
#define xsID_startsWith -32382
#define xsID_status -32381
#define xsID_sticky -32380
#define xsID_store -32379
#define xsID_stringify -32378
#define xsID_sub -32377
#define xsID_subarray -32376
#define xsID_substr -32375
#define xsID_substring -32374
#define xsID_tan -32373
#define xsID_tanh -32372
#define xsID_test -32371
#define xsID_then -32370
#define xsID_this -32369
#define xsID_throw -32368
#define xsID_toDateString -32367
#define xsID_toExponential -32366
#define xsID_toFixed -32365
#define xsID_toGMTString -32364
#define xsID_toISOString -32363
#define xsID_toJSON -32362
#define xsID_toLocaleDateString -32361
#define xsID_toLocaleLowerCase -32360
#define xsID_toLocaleString -32359
#define xsID_toLocaleTimeString -32358
#define xsID_toLocaleUpperCase -32357
#define xsID_toLowerCase -32356
#define xsID_toPrecision -32355
#define xsID_toPrimitive -32354
#define xsID_toString -32353
#define xsID_toStringTag -32352
#define xsID_toTimeString -32351
#define xsID_toUTCString -32350
#define xsID_toUpperCase -32349
#define xsID_transfers -32348
#define xsID_trim -32347
#define xsID_trimEnd -32346
#define xsID_trimLeft -32345
#define xsID_trimRight -32344
#define xsID_trimStart -32343
#define xsID_trunc -32342
#define xsID_unicode -32341
#define xsID_unregister -32340
#define xsID_unscopables -32339
#define xsID_unshift -32338
#define xsID_uri -32337
#define xsID_value -32336
#define xsID_valueOf -32335
#define xsID_values -32334
#define xsID_wait -32333
#define xsID_wake -32332
#define xsID_weak -32331
#define xsID_writable -32330
#define xsID_xor -32329
#define xsID_ -32328
#define xsID_address -32326
#define xsID_callback -32325
#define xsID_enable -32324
#define xsID_host -32323
#define xsID_idle -32322
#define xsID_interval -32321
#define xsID_keepalive -32320
#define xsID_kind -32319
#define xsID_listener -32318
#define xsID_multicast -32317
#define xsID_noDelay -32316
#define xsID_port -32315
#define xsID_protocol -32314
#define xsID_ttl -32313
#define xsID_authentication -32312
#define xsID_bssid -32311
#define xsID_build -32310
#define xsID_channel -32309
#define xsID_hidden -32308
#define xsID_password -32307
#define xsID_rssi -32306
#define xsID_ssid -32305
#define xsID_station -32304
#define xsID_priority -32303
#define xsID_qclass -32302
#define xsID_qname -32301
#define xsID_qtype -32300
#define xsID_rdata -32299
#define xsID_target -32298
#define xsID_weight -32297
#define xsID_a -32296
#define xsID_b -32295
#define xsID_identity -32294
#define xsID_m -32293
#define xsID_x -32292
#define xsID_y -32291
#define xsID_data -32290
#define xsID_end -32289
#define xsID_position -32288
#define xsID_sock -32287
#define xsID_ssl -32286
#define xsID_write -32285
#define xsID_maxPathLength -32284
#define xsID_total -32283
#define xsID_used -32282
#define xsID_timezone -32281
#define xsID_dst -32280
#define xsID_Time -32279
#define xsID_ticks -32278
#define xsID_Timer -32277
#define xsID_delay -32276
#define xsID_schedule -32275
#define xsID_Resource -32274
#define xsID_exists -32273
#define xsID_Instrumentation -32272
#define xsID_close -32271
#define xsID_read -32270
#define xsID_Listener -32269
#define xsID_Socket -32268
#define xsID_failed -32267
#define xsID_client -32266
#define xsID_Net -32265
#define xsID_packet -32264
#define xsID_SNTP -32263
#define xsID_dictionary -32262
#define xsID_error -32261
#define xsID_retry -32260
#define xsID_timer -32259
#define xsID_start -32258
#define xsID_time -32257
#define xsID_toNumber -32256
#define xsID_disconnect -32255
#define xsID_lostIP -32254
#define xsID_accessPoint -32253
#define xsID_gotIP -32252
#define xsID_onNotify -32251
#define xsID_connect -32250
#define xsID_WiFi -32249
#define xsID_connected -32248
#define xsID_mode -32247
#define xsID_scan -32246
#define xsID_disconnected -32245
#define xsID_A -32244
#define xsID_monitors -32243
#define xsID_respond -32242
#define xsID_h -32241
#define xsID_i -32240
#define xsID_j -32239
#define xsID_k -32238
#define xsID_service -32237
#define xsID_additional -32236
#define xsID_probing -32235
#define xsID_UNICAST -32234
#define xsID_CLASS -32233
#define xsID_authority -32232
#define xsID_IN -32231
#define xsID_IP -32230
#define xsID_RR -32229
#define xsID_updater -32228
#define xsID_response -32227
#define xsID_FLUSH -32226
#define xsID_ip -32225
#define xsID_LOCAL -32224
#define xsID_services -32223
#define xsID_additionals -32222
#define xsID_Serializer -32221
#define xsID_ANY -32220
#define xsID_DNS -32219
#define xsID_QUERY -32218
#define xsID_closed -32217
#define xsID_PTR -32216
#define xsID_ANSWER -32215
#define xsID_TTL -32214
#define xsID_SRV -32213
#define xsID_TXT -32212
#define xsID_answer -32211
#define xsID_QUESTION -32210
#define xsID_authoritative -32209
#define xsID_bye -32208
#define xsID_question -32207
#define xsID_txt -32206
#define xsID_record -32205
#define xsID_changed -32204
#define xsID_OPCODE -32203
#define xsID_opcode -32202
#define xsID_remove -32201
#define xsID_AAAA -32200
#define xsID_monitorTask -32199
#define xsID_update -32198
#define xsID_authorities -32197
#define xsID_MDNS -32196
#define xsID_bitmaps -32195
#define xsID_NSEC -32194
#define xsID_PORT -32193
#define xsID_answers -32192
#define xsID_callbacks -32191
#define xsID_hostName -32190
#define xsID_reply -32189
#define xsID_probe -32188
#define xsID_state -32187
#define xsID_query -32186
#define xsID_probeTimer -32185
#define xsID_mask -32184
#define xsID_mdns -32183
#define xsID_item -32182
#define xsID_instance -32181
#define xsID_scanPacket -32180
#define xsID_questions -32179
#define xsID_Parser -32178
#define xsID_SECTION -32177
#define xsID_probeAttempt -32176
#define xsID_monitor -32175
#define xsID_PREREQUISITE -32174
#define xsID_OPT -32173
#define xsID_UPDATE -32172
#define xsID_NONE -32171
#define xsID_ZONE -32170
#define xsID_ADDITIONAL -32169
#define xsID_AUTHORITATIVE -32168
#define xsID_p -32167
#define xsID_r -32166
#define xsID_EC -32165
#define xsID_a1 -32164
#define xsID_a2 -32163
#define xsID_k1 -32162
#define xsID_k2 -32161
#define xsID_inv -32160
#define xsID_mul -32159
#define xsID__mul2 -32158
#define xsID__add -32157
#define xsID_ECPoint -32156
#define xsID__mul -32155
#define xsID_mul2 -32154
#define xsID_X -32153
#define xsID_Y -32152
#define xsID_o -32151
#define xsID_serialize -32150
#define xsID_isZero -32149
#define xsID_c -32148
#define xsID_e -32147
#define xsID__mulinv_euclid -32146
#define xsID_mulinv -32145
#define xsID__mulinv_general -32144
#define xsID_square -32143
#define xsID__exp -32142
#define xsID_Modular -32141
#define xsID_LR -32140
#define xsID_SW -32139
#define xsID__exp_LR -32138
#define xsID_method -32137
#define xsID_sw_param -32136
#define xsID__exp_SW -32135
#define xsID_Mont -32134
#define xsID_dict -32133
#define xsID_n -32132
#define xsID_i1 -32131
#define xsID_i2 -32130
#define xsID_decode -32129
#define xsID_encode -32128
#define xsID_Bin -32127
#define xsID_val -32126
#define xsID_offset -32125
#define xsID_littleEndian -32124
#define xsID_blob -32123
#define xsID_len1 -32122
#define xsID_len2 -32121
#define xsID_comp -32120
#define xsID_num2bin -32119
#define xsID_view -32118
#define xsID_process -32117
#define xsID_GHASH -32116
#define xsID_outputSize -32115
#define xsID_blockSize -32114
#define xsID_aad -32113
#define xsID_eof -32112
#define xsID_BlockCipher -32111
#define xsID_decrypt -32110
#define xsID__init -32109
#define xsID_StreamCipher -32108
#define xsID_encrypt -32107
#define xsID_setIV -32106
#define xsID_Mode -32105
#define xsID_reset -32104
#define xsID_Digest -32103
#define xsID_keySize -32102
#define xsID__getObjectIdentifier -32101
#define xsID_s -32100
#define xsID_t -32099
#define xsID_v -32098
#define xsID_getChunk -32097
#define xsID_endOffset -32094
#define xsID_bs -32093
#define xsID_putChunk -32092
#define xsID_yy -32091
#define xsID_getBuffer -32090
#define xsID__decode -32089
#define xsID_BER -32088
#define xsID_getTag -32087
#define xsID_getLength -32086
#define xsID_lenlen -32085
#define xsID_arr -32084
#define xsID_pad -32083
#define xsID_len -32082
#define xsID_getOctetString -32081
#define xsID_oid -32080
#define xsID_tag -32079
#define xsID_rem -32078
#define xsID_res -32077
#define xsID_seq -32076
#define xsID_putLength -32075
#define xsID_putTag -32074
#define xsID_getBitString -32073
#define xsID_getInteger -32072
#define xsID_date -32071
#define xsID_getc -32070
#define xsID_itoa -32069
#define xsID_decodeTag -32068
#define xsID_skip -32067
#define xsID_putc -32066
#define xsID_getSequence -32065
#define xsID_getObjectIdentifier -32064
#define xsID_morebuf -32063
#define xsID_G -32062
#define xsID_P -32061
#define xsID_orderSize -32060
#define xsID_Z -32059
#define xsID_secp256r1 -32058
#define xsID_Gx -32057
#define xsID_Gy -32056
#define xsID_ec -32055
#define xsID_dh -32054
#define xsID_xs -32053
#define xsID_ys -32052
#define xsID_curves -32051
#define xsID_Curve -32050
#define xsID_curve -32049
#define xsID_H -32048
#define xsID_g -32047
#define xsID_q -32046
#define xsID_w -32045
#define xsID_z -32044
#define xsID_I2OSP -32043
#define xsID_u1 -32042
#define xsID_u2 -32041
#define xsID_os -32040
#define xsID_OS2IP -32039
#define xsID_PKCS1 -32038
#define xsID_DSA -32037
#define xsID_key -32036
#define xsID_sig -32035
#define xsID_Crypt -32034
#define xsID_verify -32033
#define xsID__verify -32032
#define xsID__sign -32031
#define xsID_exp2 -32030
#define xsID_priv -32029
#define xsID_randint -32028
#define xsID_R -32027
#define xsID_l -32026
#define xsID_u -32025
#define xsID_ECDSA -32024
#define xsID_Qu -32023
#define xsID_du -32022
#define xsID_RNG -32021
#define xsID_s_inv -32020
#define xsID_y0 -32019
#define xsID_y1 -32018
#define xsID_iv -32017
#define xsID_GCM -32016
#define xsID_cipher -32015
#define xsID_tagLength -32014
#define xsID_buf -32013
#define xsID_ctr -32012
#define xsID_one -32011
#define xsID_encFlag -32010
#define xsID_block -32009
#define xsID_ghash -32008
#define xsID_init -32007
#define xsID_digest -32006
#define xsID_bitlen -32005
#define xsID_HMAC -32004
#define xsID_hashLen -32003
#define xsID_items -32002
#define xsID_ipad -32001
#define xsID_opad -32000
#define xsID_I -31999
#define xsID_d -31998
#define xsID_OS -31997
#define xsID_privFlag -31996
#define xsID_sI -31995
#define xsID_ber -31994
#define xsID_coefficient -31993
#define xsID_privExponent -31992
#define xsID_prim1 -31991
#define xsID_prim2 -31990
#define xsID_exponent1 -31989
#define xsID_exponent2 -31988
#define xsID_exponent -31987
#define xsID_modulus -31986
#define xsID_sIS2SP -31985
#define xsID_M -31984
#define xsID_f -31983
#define xsID_EM -31982
#define xsID_emsaDecode -31981
#define xsID_bc -31980
#define xsID_ps -31979
#define xsID_emsaEncode -31978
#define xsID_RSA -31977
#define xsID_ffsize -31976
#define xsID_rsa -31975
#define xsID_emLen -31974
#define xsID_pssize -31973
#define xsID_PKCS1_5 -31972
#define xsID_modulusSize -31971
#define xsID_emeDecode -31970
#define xsID_emeEncode -31969
#define xsID_D -31968
#define xsID_S -31967
#define xsID_UP -31966
#define xsID_dk -31965
#define xsID_PKCS8 -31964
#define xsID_pkcs12gen -31963
#define xsID_RC4 -31962
#define xsID_enc -31961
#define xsID_dkLen -31960
#define xsID_SHA1 -31959
#define xsID_hash -31958
#define xsID_iter -31957
#define xsID_pass -31956
#define xsID_salt -31955
#define xsID_howmany -31954
#define xsID_C2 -31953
#define xsID_v1 -31952
#define xsID_v2 -31951
#define xsID_dp -31950
#define xsID_dq -31949
#define xsID_mn -31948
#define xsID_mp -31947
#define xsID_mq -31946
#define xsID_validity -31945
#define xsID_subject -31944
#define xsID_version -31943
#define xsID_to -31942
#define xsID_getSPK -31941
#define xsID_signature -31940
#define xsID_aki -31939
#define xsID_tbs -31938
#define xsID_ski -31937
#define xsID_spk -31936
#define xsID__decodeSPKI -31935
#define xsID_issuer -31934
#define xsID_serialNumber -31933
#define xsID_X509 -31932
#define xsID_parseDate -31931
#define xsID_decodeSPKI -31930
#define xsID_parts -31929
#define xsID_decodeExtension -31928
#define xsID_decodeAKI -31927
#define xsID_algo -31926
#define xsID_decodeTBS -31925
#define xsID_decodeSKI -31924
#define xsID_endp -31923
#define xsID_spki -31922
#define xsID_subjectPublicKeyInfo -31921
#define xsID_messageHandler -31920
#define xsID_Session -31919
#define xsID_SecureSocket -31918
#define xsID_tls_server_name -31917
#define xsID_handshake -31916
#define xsID_secure -31915
#define xsID_bytesAvailable -31914
#define xsID_initiateHandshake -31913
#define xsID_closing -31912
#define xsID_handshaking -31911
#define xsID_toBuffer -31910
#define xsID_System -31909
#define xsID_config -31908
#define xsID_Directory -31907
#define xsID_rename -31906
#define xsID_File -31905
#define xsID_Iterator -31904
#define xsID_info -31903
#define xsID_msg -31902
#define xsID_LoadMod -31901
#define xsID_code -31900
#define xsID_Request -31899
#define xsID_request -31898
#define xsID_connections -31897
#define xsID_prepareResponse -31896
#define xsID_header -31895
#define xsID_etc -31894
#define xsID_requestComplete -31893
#define xsID_requestFragment -31892
#define xsID_headersComplete -31891
#define xsID_socket -31890
#define xsID_server -31889
#define xsID_headers -31888
#define xsID_connection -31887
#define xsID_buffers -31886
#define xsID_first -31885
#define xsID_limit -31884
#define xsID_body -31883
#define xsID_type -31882
#define xsID_responseComplete -31881
#define xsID_responseFragment -31880
#define xsID_Server -31879
#define xsID_subprotocol -31878
#define xsID_doMask -31877
#define xsID_detach -31876
#define xsID_hdr -31875
#define xsID_Base64 -31874
#define xsID_string -31873
#define xsID_Client -31872
#define xsID_sha1 -31871
#define xsID_Logical -31870
#define xsID_receive -31869
#define xsID_not -31868
#define xsID_PUBLISH -31867
#define xsID_onSubscribe -31866
#define xsID_publish -31865
#define xsID_timeout -31864
#define xsID_onMessage -31863
#define xsID_ws -31862
#define xsID_getRemainingLength -31861
#define xsID_unsubscribe -31860
#define xsID_onAccept -31859
#define xsID_dispatch -31857
#define xsID_expect -31856
#define xsID_qos -31855
#define xsID_UNSUBSCRIBE -31854
#define xsID_use -31853
#define xsID_CONNACK -31852
#define xsID_CONNECT -31851
#define xsID_SUBSCRIBE -31850
#define xsID_onClose -31849
#define xsID_ws_callback -31848
#define xsID_writeRemainingLength -31847
#define xsID_makeStringBuffer -31846
#define xsID_onReady -31845
#define xsID_topic -31844
#define xsID_fail -31843
#define xsID_socket_callback -31842
#define xsID_received -31841
#define xsID_last -31840
#define xsID_returnCode -31839
#define xsID_will -31838
#define xsID_user -31837
#define xsID_subscribe -31836
#define xsID_onConnected -31835
#define xsID_payload -31834
#define xsID_onUnsubscribe -31833
#define xsID_WSClient -31832
#define xsID_options -31831
#define xsID_ti -31829
#define xsID_subscriptions -31828
#define xsID_clients -31827
#define xsID_MQTT -31825
#define xsID_subscription -31824
#define xsID_part -31822
#define xsID_Flash -31820
#define xsID_erase -31819
#define xsID_sntp -31818
#define xsID_recursionDesired -31817
#define xsID_binary -31816
#define xsID_property -31815
#define xsID_fragment -31814
#define xsID_clss -31813
#define xsID_section -31812
#define xsID_sections -31811
#define xsID_session -31810
#define xsID_traceProtocol -31809
#define xsID_packetize -31808
#define xsID_writeChar -31807
#define xsID_recordProtocol -31806
#define xsID_SSLStream -31805
#define xsID_close_notify -31804
#define xsID_unpacketize -31803
#define xsID_readChar -31802
#define xsID_alert -31801
#define xsID_level -31800
#define xsID_getByHost -31799
#define xsID_secret -31798
#define xsID_getByID -31797
#define xsID_saveSession -31796
#define xsID_deleteSessionID -31795
#define xsID_getCerts -31794
#define xsID_getIndex -31793
#define xsID_findCert -31792
#define xsID_pk -31791
#define xsID_getKey -31790
#define xsID_clientKey -31787
#define xsID_CertificateManager -31786
#define xsID_findPreferredCert -31785
#define xsID_certificate -31784
#define xsID_getDH -31783
#define xsID_certs -31782
#define xsID_fname -31781
#define xsID_clientCertificates -31780
#define xsID_names -31779
#define xsID_x509 -31777
#define xsID_cert -31775
#define xsID_types -31774
#define xsID_getResource -31773
#define xsID_SetupCipher -31772
#define xsID_writeSeqNum -31771
#define xsID_readSeqNum -31770
#define xsID_changeCipherSpec -31769
#define xsID_connectionEnd -31768
#define xsID_upper -31767
#define xsID_change_cipher_spec -31766
#define xsID_keyExchangeAlgorithm -31765
#define xsID_encryptionMode -31764
#define xsID_hashSize -31763
#define xsID_CBC -31762
#define xsID_AES -31761
#define xsID_DES -31760
#define xsID_MD5 -31759
#define xsID_hashAlgorithm -31758
#define xsID_ivSize -31757
#define xsID_SHA256 -31756
#define xsID_SHA384 -31755
#define xsID_isExportable -31754
#define xsID_tls -31753
#define xsID_DHE_RSA -31752
#define xsID_TDES -31751
#define xsID_NULL -31750
#define xsID_cipherKeySize -31749
#define xsID_supportedCipherSuites -31748
#define xsID_ECDHE_RSA -31747
#define xsID_cipherAlgorithm -31746
#define xsID_cipherBlockSize -31745
#define xsID_saltSize -31744
#define xsID_supportedCompressionMethods -31743
#define xsID_CERT_DSA -31742
#define xsID_CERT_RSA -31741
#define xsID_minProtocolVersion -31740
#define xsID_DH_DSS -31739
#define xsID_DH_RSA -31738
#define xsID_protocolVersion -31737
#define xsID_maxProtocolVersion -31736
#define xsID_DHE_DSS -31735
#define xsID_DH_ANON -31734
#define xsID_cipherSuites -31733
#define xsID_tls_application_layer_protocol_negotiation -31732
#define xsID_certSize -31731
#define xsID_secp521r1 -31730
#define xsID_client_hello -31729
#define xsID_secp384r1 -31728
#define xsID_c1 -31727
#define xsID_c2 -31726
#define xsID_signature_algorithms -31725
#define xsID_nsuites -31724
#define xsID_Yc -31723
#define xsID_selectCompressionMethod -31722
#define xsID_hello_request -31721
#define xsID_dhparams -31720
#define xsID_es -31719
#define xsID_certificateVerify -31718
#define xsID_rsa_sign -31717
#define xsID_server_key_exchange -31716
#define xsID_ttlSize -31715
#define xsID_readChars -31714
#define xsID_tls_ec_point_formats -31713
#define xsID_client_finished_label -31712
#define xsID_readChunk -31711
#define xsID_chosenCipher -31710
#define xsID_clientKeyExchange -31709
#define xsID_handshakeMessages -31708
#define xsID_qmt_unix_time -31707
#define xsID_sha224 -31706
#define xsID_sha512 -31705
#define xsID_sha256 -31704
#define xsID_sha384 -31703
#define xsID_tls_signature_algorithms -31702
#define xsID_handshakeDigests -31701
#define xsID_compressionMethods -31700
#define xsID_PRF -31699
#define xsID_certificateRequest -31698
#define xsID_server_hello_done -31697
#define xsID_calculateVerifyData -31696
#define xsID_named_curve -31695
#define xsID_clientCerts -31694
#define xsID_tls_status_request -31693
#define xsID_helloProtocol -31692
#define xsID_clientHello -31691
#define xsID_md5 -31690
#define xsID_SHA224 -31689
#define xsID_SHA512 -31688
#define xsID_finished -31687
#define xsID_bytesWritten -31686
#define xsID_dsa -31685
#define xsID_myCert -31684
#define xsID_masterSecret -31683
#define xsID_preMasterSecret -31682
#define xsID_ext -31681
#define xsID_pkt -31680
#define xsID_ver -31679
#define xsID_ed448 -31678
#define xsID_sessionID -31677
#define xsID_nCertTypes -31676
#define xsID_tls_trusted_hmac -31675
#define xsID_hash_algo -31674
#define xsID_helloRequest -31673
#define xsID_generateMasterSecret -31672
#define xsID_bodyLen -31671
#define xsID_dss_sign -31670
#define xsID_ecpoint -31669
#define xsID_handshakeDigestResult -31668
#define xsID_dh_Ys -31667
#define xsID_serverRandom -31666
#define xsID_serverKeyExchange -31665
#define xsID_serverSessionID -31664
#define xsID_tls_max_fragment_length -31663
#define xsID_ecdsa -31662
#define xsID_tls_client_certification_url -31661
#define xsID_handshakeDigestUpdate -31660
#define xsID_suites -31659
#define xsID_compressionMethod -31658
#define xsID_extension_type -31657
#define xsID_peerMethods -31656
#define xsID_peerCert -31655
#define xsID_sessionIDLen -31654
#define xsID_writeChars -31653
#define xsID_tls_trusted_ca_keys -31652
#define xsID_byteAvailable -31651
#define xsID_ed25519 -31650
#define xsID_writeChunk -31649
#define xsID_anonymous -31648
#define xsID_bytes -31647
#define xsID_x448 -31646
#define xsID_plain -31645
#define xsID_serverHello -31644
#define xsID_certificate_request -31643
#define xsID_writeString -31642
#define xsID_named_curves -31641
#define xsID_tls_elliptic_curves -31640
#define xsID_x25519 -31639
#define xsID_which -31638
#define xsID_master_secret_label -31637
#define xsID_serverHelloDone -31636
#define xsID_dh_g -31635
#define xsID_rsa_fixed_dh -31634
#define xsID_dh_p -31633
#define xsID_client_key_exchange -31632
#define xsID_flag -31631
#define xsID_server_finished_label -31630
#define xsID_server_hello -31629
#define xsID_handshakeProcess -31628
#define xsID_none -31627
#define xsID_curve_type -31626
#define xsID_tbuf -31625
#define xsID_handshakeProtocol -31624
#define xsID_methods -31623
#define xsID_selectCipherSuite -31622
#define xsID_clientRandom -31621
#define xsID_certificate_verify -31620
#define xsID_random_bytes -31619
#define xsID_nmethods -31618
#define xsID_msgType -31617
#define xsID_sig_algo -31616
#define xsID_certificateManager -31615
#define xsID_mySuite -31614
#define xsID_finishLabel -31613
#define xsID_peerSuites -31612
#define xsID_clientSessionID -31611
#define xsID_calculateDigest -31610
#define xsID_dss_fixed_dh -31609
#define xsID_sz -31608
#define xsID_p_hash -31607
#define xsID_iceil -31606
#define xsID_label -31605
#define xsID_hmac -31604
#define xsID_seed -31603
#define xsID_tlsCompressed -31602
#define xsID_putData -31601
#define xsID_application_data -31600
#define xsID_additional_data -31599
#define xsID_calculateMac -31598
#define xsID_padLen -31597
#define xsID_mac -31596
#define xsID_serverCipher -31595
#define xsID_seqNum -31594
#define xsID_SSLAlert -31593
#define xsID_fragmentLen -31592
#define xsID_stream -31591
#define xsID_blksz -31590
#define xsID_padSize -31589
#define xsID_content -31588
#define xsID_clientCipher -31587
#define xsID_nonce -31586
#define xsID_explicit_nonce -31585
#define xsID_aeadAdditionalData -31584
#define xsID_tlsPlainText -31583
#define xsID_tmps -31582
#define xsID_tlsCipherText -31581
#define xsID_resumed -31580
#define xsID_stopTrace -31579
#define xsID_packetBuffer -31578
#define xsID_doProtocol -31577
#define xsID_applicationLayerProtocolNegotiation -31576
#define xsID_param1 -31575
#define xsID_param2 -31574
#define xsID_available -31573
#define xsID_direction -31572
#define xsID_cacheManager -31571
#define xsID_readPacket -31570
#define xsID_clientAuth -31569
#define xsID_startTrace -31568
#define xsID_subjectDN -31567
#define xsID_maxFragmentSize -31566
#define xsID_need -31565
#define xsID_serverName -31564
#define xsID_traceLevel -31563
#define xsID_applicationData -31562
#define xsID_SSLSession -31561
#define xsID_traceDirection -31560
#define xsID_setupSub -31559
#define xsID_Gcm -31558
#define xsID_macSecret -31557
#define xsID_keyBlock -31556
#define xsID_nbytes -31555
#define xsID_macSize -31554
#define xsID_reference -31550
#define xsID_Analog -31549
#define xsID_format -31548
#define xsID_rotation -31547
#define xsID_file -31546
#define xsID_root -31545

