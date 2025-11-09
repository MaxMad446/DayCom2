package main

// Auto-generated | 2026-05-12T04:34:10.146558
import "fmt"

func Process_417() int {
    base := 31
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_417())
}
