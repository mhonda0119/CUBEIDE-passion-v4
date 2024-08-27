/*
 * stdout.h
 *
 *  Created on: Aug 28, 2024
 *      Author: MasakatsuHonda
 */

#ifndef _STDOUT_H_
#define _STDOUT_H_

#ifdef __cplusplus
 extern "C" {
#endif

#ifdef __GNUC__
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)

#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */
void __io_putchar(uint8_t ch);
#ifdef __cplusplus
}
#endif


#endif /* INC_STDOUT_H_ */
