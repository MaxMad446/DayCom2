package main

// Auto-generated | 2026-05-12T21:39:08.392041
import "fmt"

func Process_593() int {
    base := 48
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_593())
}
