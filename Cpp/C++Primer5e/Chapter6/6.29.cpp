// 应当，免去了复制对象的开销(并且 initializer_list 本身就是常量)

//应该使用常量引用类型。initializer_list对象中的元素都是常量，我们无法修改initializer_list对象中的元素的值。