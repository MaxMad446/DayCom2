package main

// Auto-generated | 2026-05-11T20:51:43.366980
import "fmt"

func Process_675() int {
    base := 237
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_675())
}
