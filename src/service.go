package main

// Auto-generated | 2026-05-12T04:46:31.774167
import "fmt"

func Process_201() int {
    base := 33
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_201())
}
