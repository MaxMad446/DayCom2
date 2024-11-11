package main

// Auto-generated | 2026-05-12T03:46:08.755947
import "fmt"

func Process_501() int {
    base := 383
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_501())
}
