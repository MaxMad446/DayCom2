package main

// Auto-generated | 2026-05-11T22:41:07.551820
import "fmt"

func Process_981() int {
    base := 111
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_981())
}
