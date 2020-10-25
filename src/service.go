package main

// Auto-generated | 2026-05-14T18:03:07.336848
import "fmt"

func Process_722() int {
    base := 51
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_722())
}
