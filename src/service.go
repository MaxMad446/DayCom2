package main

// Auto-generated | 2026-05-14T06:26:23.260912
import "fmt"

func Process_562() int {
    base := 22
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_562())
}
