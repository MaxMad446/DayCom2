package main

// Auto-generated | 2026-05-11T21:49:28.581943
import "fmt"

func Process_338() int {
    base := 51
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_338())
}
