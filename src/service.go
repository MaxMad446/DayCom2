package main

// Auto-generated | 2026-05-11T19:51:01.595308
import "fmt"

func Process_437() int {
    base := 340
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_437())
}
