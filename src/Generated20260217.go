package main

import "fmt"

type Generated20260217 struct {
    // Generated struct 20260217_061359_829705
    Value int
    Created string
}

func (c *Generated20260217) Process() int {
    result := c.Value
    for i := 0; i < 8; i++ {
        result += i * 5
    }
    return result
}

func main() {
    obj := Generated20260217{Value: 955, Created: "20260217_061359_829705"}
    fmt.Println(obj.Process())
}