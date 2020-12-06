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
function fibonacci (num) {
  if (num === 0) return 0;
  if (num === 1) return 1;

  var fn_2 = 0; var fn_1 = 1;
  for (var n = 2; n < num; n++) {
    var temp_fn_1 = fn_1;
    fn_1 = fn_2 + fn_1;
    fn_2 = temp_fn_1;
  }
  return fn_2 + fn_1;
}
var result = fibonacci(22);
trace(result + '\n');
