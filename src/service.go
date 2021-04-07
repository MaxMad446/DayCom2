package main

// Auto-generated | 2026-05-11T20:09:52.331009
import "fmt"

func Process_158() int {
    base := 320
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_158())
}
