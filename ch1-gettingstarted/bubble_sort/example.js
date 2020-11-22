/*
 * Copyright (c) 2016-2020 Moddable Tech, Inc.
 *
 *   This file is part of the Moddable SDK.
 * 
 *   This work is licensed under the
 *       Creative Commons Attribution 4.0 International License.
 *   To view a copy of this license, visit
 *       <http://creativecommons.org/licenses/by/4.0>
 *   or send a letter to Creative Commons, PO Box 1866,
 *   Mountain View, CA 94042, USA.
 *
 */

function bubbleSort(arr){
    let n = arr.length;
    while (n > 1) {
      let newN = 0;
      for (let i = 1; i <= n - 1; i++) {
          if (arr[i-1] > arr[i]) {
            const prevArrI = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = prevArrI;

            newN = i;
          }
      }
      n = newN;
    }

    return arr;
 }
const result = bubbleSort([7, 5, 2, 4.5, 3, 915.5, -318, -4, 0, 4, 21452]);
trace(result);
