package main

import "fmt"

type Generated20260511 struct {
    // Generated struct 20260511_174111_833565
    Value int
    Created string
}

func (c *Generated20260511) Process() int {
    result := c.Value
    for i := 0; i < 6; i++ {
        result += i * 5
    }
    return result
}

func main() {
    obj := Generated20260511{Value: 828, Created: "20260511_174111_833565"}
    fmt.Println(obj.Process())
}