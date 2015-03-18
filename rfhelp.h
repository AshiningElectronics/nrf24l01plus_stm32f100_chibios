/*
	Copyright 2015 Benjamin Vedder	benjamin@vedder.se

	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef RFHELP_H_
#define RFHELP_H_

// Functions
void rfhelp_init(void);
int rfhelp_send_data(char *data, int len);
int rfhelp_read_rx_data(char *data, int *len, int *pipe);
int rfhelp_rf_status(void);
void rfhelp_set_tx_addr(char *addr, int addr_len);
void rfhelp_set_rx_addr(int pipe, char *addr, int addr_len);

#endif /* RFHELP_H_ */
