/*
 * Copyright (c) 2014-2015, dennis wang
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL dennis wang BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef STREAM_API_H
#define STREAM_API_H

#include "config.h"

/*
 * ȡ���������ڿɶ��ֽ���
 * @param stream stream_tʵ��
 * @return �ɶ��ֽ���
 */
int stream_available(stream_t* stream);

/*
 * ���������
 * @param stream stream_tʵ��
 */
void stream_eat(stream_t* stream);

/*
 * ���������ڶ�ȡ���ݲ��������
 * @param stream stream_tʵ��
 * @param buffer ������
 * @param size ��������С
 * @return �������ֽ���
 */
int stream_pop(stream_t* stream, char* buffer, int size);

/*
 * ����������д����
 * @param stream stream_tʵ��
 * @param buffer ������
 * @param size ��������С
 * @return д����ֽ���
 */
int stream_push(stream_t* stream, char* buffer, int size);

/*
 * ���������ڿ������ݣ��������������������
 * @param stream stream_tʵ��
 * @param buffer ������
 * @param size ��������С
 * @return �������ֽ���
 */
int stream_copy(stream_t* stream, char* buffer, int size);

#endif /* STREAM_API_H */