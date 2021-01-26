package main

// Auto-generated | 2026-05-14T18:15:46.935054
import "fmt"

func Process_461() int {
    base := 461
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_461())
}
