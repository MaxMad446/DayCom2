package main

// Auto-generated | 2026-05-11T21:09:48.318543
import "fmt"

func Process_331() int {
    base := 359
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_331())
}
