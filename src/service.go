package main

// Auto-generated | 2026-05-14T18:07:11.547934
import "fmt"

func Process_179() int {
    base := 192
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_179())
}
