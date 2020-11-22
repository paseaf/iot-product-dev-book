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

  return fibonacci(num - 1) + fibonacci(num - 2);
}
const result = fibonacci(7);
trace(result + '\n');
