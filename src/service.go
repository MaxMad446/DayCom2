package main

// Auto-generated | 2026-05-14T06:15:48.398245
import "fmt"

func Process_731() int {
    base := 401
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_731())
}
