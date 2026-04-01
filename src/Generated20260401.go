package main

import "fmt"

type Generated20260401 struct {
    // Generated struct 20260401_201227_983170
    Value int
    Created string
}

func (c *Generated20260401) Process() int {
    result := c.Value
    for i := 0; i < 26; i++ {
        result += i * 5
    }
    return result
}

func main() {
    obj := Generated20260401{Value: 306, Created: "20260401_201227_983170"}
    fmt.Println(obj.Process())
}