./push_swap 149 313 8 105 359 200 384 61 3 236 396 55 211 373 459 38 297 224 190 12 399 469 54 455 458 476 74 288 39 42 47 19 325 119 497 366 262 53 310 255 386 426 123 401 460 28 402 144 191 46 492 156 423 71 347 273 95 40 235 320 202 14 368 114 238 281 446 57 327 286 242 300 303 317 328 437 444 477 330 172 196 462 253 92 411 73 448 309 406 60 129 16 348 355 155 312 32 189 387 124 295 324 289 160 118 465 94 307 316 44 193 199 161 424 178 335 22 301 246 342 350 203 137 45 449 479 179 410 329 237 332 421 116 254 62 88 349 142 377 331 108 306 428 500 177 271 265 481 76 141 201 166 294 456 257 356 217 233 451 20 219 397 415 75 70 354 23 370 299 422 338 280 187 72 4 80 66 229 138 362 49 147 471 214 389 470 360 170 185 102 419 420 441 435 43 440 120 103 125 337 35 136 18 270 77 84 287 167 439 226 322 65 452 159 468 413 375 302 463 252 194 345 308 296 283 131 9 365 430 222 275 209 232 184 323 461 220 152 132 326 364 357 445 250 293 198 10 169 425 450 443 243 192 64 290 121 165 489 282 135 344 321 213 221 453 267 247 403 383 263 228 150 68 371 498 409 34 279 251 87 99 372 490 210 85 2 148 33 434 173 41 130 97 86 305 36 151 376 122 79 145 230 258 433 304 59 334 495 163 408 183 427 367 104 208 56 82 225 139 475 216 416 412 480 110 390 464 180 67 212 93 164 215 276 127 333 485 174 218 291 436 171 398 438 223 272 472 249 277 175 244 496 483 1 259 442 457 414 318 248 241 473 100 378 111 69 487 206 417 429 352 182 107 447 353 52 358 227 314 260 181 494 284 478 405 484 83 493 363 391 133 91 339 315 205 204 11 25 336 319 393 381 467 50 340 298 153 431 482 98 239 234 285 343 168 17 392 96 24 195 379 264 404 351 256 146 418 432 385 81 261 5 278 266 51 128 454 101 466 106 113 26 346 269 361 58 491 400 268 134 6 380 188 486 499 197 37 27 488 394 78 143 31 126 7 311 48 30 115 382 158 207 388 109 231 369 176 90 117 63 154 29 474 186 292 13 274 140 89 245 374 240 341 112 21 407 157 162 395 15 | ./checker 149 313 8 105 359 200 384 61 3 236 396 55 211 373 459 38 297 224 190 12 399 469 54 455 458 476 74 288 39 42 47 19 325 119 497 366 262 53 310 255 386 426 123 401 460 28 402 144 191 46 492 156 423 71 347 273 95 40 235 320 202 14 368 114 238 281 446 57 327 286 242 300 303 317 328 437 444 477 330 172 196 462 253 92 411 73 448 309 406 60 129 16 348 355 155 312 32 189 387 124 295 324 289 160 118 465 94 307 316 44 193 199 161 424 178 335 22 301 246 342 350 203 137 45 449 479 179 410 329 237 332 421 116 254 62 88 349 142 377 331 108 306 428 500 177 271 265 481 76 141 201 166 294 456 257 356 217 233 451 20 219 397 415 75 70 354 23 370 299 422 338 280 187 72 4 80 66 229 138 362 49 147 471 214 389 470 360 170 185 102 419 420 441 435 43 440 120 103 125 337 35 136 18 270 77 84 287 167 439 226 322 65 452 159 468 413 375 302 463 252 194 345 308 296 283 131 9 365 430 222 275 209 232 184 323 461 220 152 132 326 364 357 445 250 293 198 10 169 425 450 443 243 192 64 290 121 165 489 282 135 344 321 213 221 453 267 247 403 383 263 228 150 68 371 498 409 34 279 251 87 99 372 490 210 85 2 148 33 434 173 41 130 97 86 305 36 151 376 122 79 145 230 258 433 304 59 334 495 163 408 183 427 367 104 208 56 82 225 139 475 216 416 412 480 110 390 464 180 67 212 93 164 215 276 127 333 485 174 218 291 436 171 398 438 223 272 472 249 277 175 244 496 483 1 259 442 457 414 318 248 241 473 100 378 111 69 487 206 417 429 352 182 107 447 353 52 358 227 314 260 181 494 284 478 405 484 83 493 363 391 133 91 339 315 205 204 11 25 336 319 393 381 467 50 340 298 153 431 482 98 239 234 285 343 168 17 392 96 24 195 379 264 404 351 256 146 418 432 385 81 261 5 278 266 51 128 454 101 466 106 113 26 346 269 361 58 491 400 268 134 6 380 188 486 499 197 37 27 488 394 78 143 31 126 7 311 48 30 115 382 158 207 388 109 231 369 176 90 117 63 154 29 474 186 292 13 274 140 89 245 374 240 341 112 21 407 157 162 395 15

N=70

for i in `seq 1 $N`
do
	./push_swap `ruby -e "puts (1..500).to_a.shuffle.join(' ')"` | wc -l
done
