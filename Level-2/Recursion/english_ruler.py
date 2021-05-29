def draw_line(tick_length, tick_label=''):
    line = '-'*tick_length
    if tick_label:
        line += ' ' + tick_label
    print(line)


def draw_interval(center_length):
    if center_length>0:         # stops when its 0
        draw_interval(center_length-1)              ## Increasing one
        draw_line(center_length)      ## main line executer for this function
        draw_interval(center_length-1)               ## decreasing one

def draw_ruler(num_inches, major_length):
    draw_line(major_length, '0')
    for j in range(1, 1+num_inches):
        draw_interval(major_length-1)
        draw_line(major_length, str(j))

    
draw_ruler(5, 4)