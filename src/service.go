package main

// Auto-generated | 2026-05-14T06:19:48.379647
import "fmt"

func Process_514() int {
    base := 130
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_514())
}
