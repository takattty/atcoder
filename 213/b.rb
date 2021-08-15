num = gets.to_i
values = gets.split(' ').map(&:to_i)
value_hash = Hash.new([])

i = 0
num.times {
  value_hash[i] = values[i]
  i = i + 1
}

new_value_hash = value_hash.sort_by { |key, value| value }
player = new_value_hash[num-2][0]
puts player+1
